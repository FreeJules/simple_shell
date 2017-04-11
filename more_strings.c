#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 * Return: difference in value of first char that's different
 */
int _strcmp(char *s1, char *s2)
{
	int i, dif;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
		i++;
	}
	if (s1[i] == s2[i] && s1[i] == '\0')
		dif = 0;
	return (dif);
}
/**
 * _strchr - locates character in string
 * @str: pointer to a string
 * @c: char to find
 * Return: pointer to the matched character or NULL
 */
char *_strchr(const char *str, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)(str + i));
	}
	return (NULL);
}
/**
 * len_to_char - finds string length to passed char
 * @str: pointer to a string
 * @c: char to find
 * Return: length of string before char or 0 if not found
 */
int len_to_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (0);
	return (i);
}
