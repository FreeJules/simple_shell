#include "tlpi_hdr.h"
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **environ)
{
	char **ep;
/*	extern char **environ; */
	for (ep = environ; *ep != NULL; ep++)
	{
		puts(*ep);
	}

	exit(EXIT_SUCCESS);
}
