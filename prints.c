#include "shell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strprint - prints a string
 * @str: pointer to string to print
 * Return: none
 */
void _strprint(char *str)
{
	write(1, str, _strlen(str));
}
/**
 * print_array - Prints an array of strings
 * @array: The array to print
 * Return: nothing
 */
void print_array(char **array)
{
	int i;

	for (i = 0; array[i] != NULL; ++i)
	{
		/* printf("%s\n", array[i]); */
		_strprint(array[i]);
		_putchar('\n');
	}
}
