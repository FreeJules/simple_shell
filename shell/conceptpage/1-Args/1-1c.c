#include <stdio.h>
#include <stdlib.h>
/**
 *main - Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
 *man 3 getline
 *important make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: "end-of-file", or EOF (or Ctrl+D).
 *#advanced: Write your own version of getline.
 */
int input(char *s,int length);

int main(void)
{
	char* buffer = 0;
	size_t bufsize = 32;
	size_t characters;
	ssize_t input;
	int i;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == '\0')
	{
		perror("Unable to allocate buffer");
		free(buffer);
		exit(1);
	}
	printf("$ ");
	characters = getline(&buffer,&bufsize,stdin);
	for (i = 0 ;(buffer[i] != '\0')-1;i++)
	{
		printf("%zu characters were read.\n",characters);
		printf("You typed: %s\n",buffer);
		fwrite(buffer, 1, input, stdout);
	}
	free(buffer);
	return(i);
}
