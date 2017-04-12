/*
Also glibc getline.
    http://mail.gnome.org/archives/gnome-list/2000-August/msg00123.html
    http://mail.python.org/pipermail/patches/2000-November/002880.html
Also mention fgets not writing beyond \0 caveat
Also mess around with setvbuf(stdin+stdout,..) to see how it affects things (info libc, s buffering)
*/
/* getline uses getc internally.
   includes \n & \0 on returned lines (doesn't auto add \n if not present @ EOF)
   lineptr & n can be NULL or malloced buffer.
   num chars in line (including \n) is returned so that embedded NULs can be handled.
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* line=0;
	size_t line_buf_len=0;
	ssize_t curr_line_len;

	printf("$ ");
	while ((curr_line_len=getline(&line, &line_buf_len, stdin))>0)
		fwrite(line, 1, curr_line_len, stdout);

	free(line);
	exit(EXIT_SUCCESS);
}
