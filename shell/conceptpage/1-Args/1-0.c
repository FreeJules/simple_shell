#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	for (i = 0; av[i] != '\0'; av++)
	{
		printf("%s ", *av);
	}
	printf("\n");
	return (0);
}
