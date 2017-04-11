#include "shell.h"
/**
 * _getline - prints "$ ", wait for the user to enter a command, prints it on
 *  the next line
 * @input: pointer to buffer to store input
 * @size: size of a buffer
 * Return: chars read
 */
int _getline(char *input, int size)
{
	int i;

	_strprint(PROMPT);
	for (i = 0; i < size - 1; i++)
	{
		read(STDIN_FILENO, (input + i), 1);
		if (input[i] == '\n')
			break;
	}
	i++;
	input[i] = '\0';
	return (i);
}
/**
 * exit_shell - if user types 'exit' exit shell
 * @line: pointer to a buffer where input line was stored
 * Return: 1 if want to exit, 0 otherwise
 */
int exit_shell(char *line)
{
	char end[5] = "exit\n";

	if (_strncmp(line, end, 4) == 0 && (_strlen(end) == _strlen(line)))
		return (1);
	return (0);
}
