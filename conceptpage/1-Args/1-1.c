#include <stdio.h>
#include <stdlib.h>
/**
 *main - Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
 *man 3 getline
 *important make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: "end-of-file", or EOF (or Ctrl+D).
 *#advanced: Write your own version of getline.

int input(char *s,int length);

int main()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;
	int i;
	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == '\0')
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	printf("Type something: ");
	characters = getline(&buffer,&bufsize,stdin);
	printf("%zu characters were read.\n",characters);
	printf("You typed: '%s'\n",buffer);

	return(0);
}


int main()
{
	int bytes_read;
	int nbytes = 100;
	char *my_string;

	puts ("Please enter a line of text.");

	/* These 2 lines are the heart of the program. */
/*	my_string = (char *) malloc (nbytes + 1);
	bytes_read = getline (&my_string, &nbytes, stdin);

	if (bytes_read == -1)
	{
		puts ("ERROR!");
	}
	else
	{
		puts ("You typed:");
		puts (my_string);
	}

	return 0;
}
*/
#include <stdio.h>

int main()

{
	int memory_read;
	int nbytes = 200;
	char *your_string;

	puts (“Enter stream, or line of text, here:”);
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
