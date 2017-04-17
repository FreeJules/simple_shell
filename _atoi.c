#include "shell.h"
/**
 * _atoi - converts string to integer
 * @s: pointer to string to print
 * Return: number or -1 on error
 */
int _atoi(char *s)
{
	int size, number, exponent, i;

	size = _strlen(s);
	exponent = 1;
	for (i = 1; i < size; i++)
		exponent *= 10;
	number = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			number += (s[i] - '0') * exponent;
		else
		{
			perror("wrong input for exit status\n");
			return (-1);
		}
		exponent /= 10;
	}
	if (number > 255 || number < -1)
	{
		perror("exit status out of range\n");
		return (-1);
	}
	return (number);
}
