#include "shell.h"
/**
 * count_words - counts separate words in string
 * @str: pointer to s
 * @delim: delimiter
 * Return: number of words
 */
int count_words(char *str, char delim)
{
	int i, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != delim && (str[i + 1] == delim || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
/**
 * _wrdlen - returns the lenght of a word
 * @s: pointer to s
 * @delim: delimiter
 * Return: 0 on success
 */
int _wrdlen(char *s, char delim)
{
	int count = 0;

	while (*(s + count) != delim && *(s + count) != '\0')
		count++;
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: string to break
 * @delim: delimiter
 * Return: array of strings(words)
 */
char **strtow(char *str, char delim)
{
	int i, j, k, h, c, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	c = count_words(str, delim);
	if (c == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (c + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == delim && str[i] != '\0')
			i++;
		if (str[i] == '\0')
		{
			words[j] = NULL;
			return (words);
		}
		words[j] = malloc(sizeof(char) * _wrdlen(str + i, delim) + 1);
		if (words[j] == NULL)
		{
			for (k = j - 1; k >= 0; k--)
				free(words[k]);
			free(words);
			return (NULL);
		}
		len = _wrdlen(str + i, delim);
		for (h = 0; h < len && str[i] != '\0'; h++, i++)
			words[j][h] = str[i];
		words[j][h] = '\0';
		j++;
	}
	words[j] = NULL;
	return (words);
}
