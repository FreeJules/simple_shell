#include "shell.h"
/**
 * main - Entry point
 * Return: Always 0 on succes
 */
int main(void)
{
	char *buffer, *line;
	int ret_val;
	/* create a buffer to store input */
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
		return (1);
	line = NULL;
	/* call cmd_line_loop */
	ret_val = cmd_line_loop(buffer, line);
	return (ret_val);
}
