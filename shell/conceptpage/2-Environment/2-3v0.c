#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

	char* pathstring;

	pathstring =  getenv("PATH");
	printf("%s\n",pathstring);
}
