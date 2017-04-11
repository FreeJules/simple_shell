#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

	char* pathstring;
	char* directory;
	int i = 0;

	pathstring =  getenv("PATH");

	while ((directory = strtok(NULL, " ")) != NULL)
	directory = strtok(pathstring, ":");
	printf("1st directory: %s\n", directory);


	directory = strtok(NULL, " ");
	printf("2nd directory: %s\n", directory);

	return 0;
}
