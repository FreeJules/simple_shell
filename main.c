#include "shell.h"
int main(int argc __attribute__((__unused__)), char *argv[])
{
	int i;

	for(i = 1; argv[i] != NULL; i++)
	{
		printf("%s\n",argv[i]);
	}
	return 0;
}
