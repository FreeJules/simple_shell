#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int memory_read;
	int nbytes = 200;
	char *your_string;
	printf(“Enter stream, or line of text, here:”);
	your_string = (char *) malloc (nbytes + 1);
	memory_read = getline (&your_string, &nbytes, stdin);
	if (memory_read == -1)
	{
		puts (“Error : only EOF without text read”);
	}
	else
	{
		puts (your_string);
	}
	return 0;
}
