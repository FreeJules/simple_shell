#include "tlpi_hdr.h"
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **environ)
{
	char *env_ptr;
	char **environ_ptr;
	env_ptr = getenv("SHELL");

	printf("Address of env_ptr: %p\n", env_ptr);
/*	environ_ptr =

	char **pp = environ; */
	for(environ_ptr = environ; *environ_ptr; environ_ptr++)
	{
		;
		/*		printf("%s\n", *environ_ptr);*/
	}
	printf("End of environ: %p\n", environ_ptr);
}
/**
 *int main(int ac, char **av, char **environ)
 *{
 * 	char **ep;
 *
 * 	for (ep = environ; *ep != NULL; ep++)
 * 	{
 * 		puts(*ep);
 * 	}
 *
 * 	exit(EXIT_SUCCESS);
 * }
 */
