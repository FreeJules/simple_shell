#include "shell.h"
/**
 * _getline - prints "$ ", wait for the user to enter a command, prints it on
 *  the next line
 * @input: pointer to buffer to store input
 * @size: size of a buffer
 * Return: chars read or -1 if _realloc failed
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
	int cmp, lend, lline;

	cmp = _strncmp(line, END, 4);
	lend = _strlen(END);
	lline = _strlen(line);
	if (cmp == 0 && lend == lline)
		return (1);
	return (0);
}
/**
 * clear_buffer - sets all the chars in buffer to 0
 * @buffer: buffer to reset
 * Return: nothing
 */
void clear_buffer(char *buffer)
{
	int i;

	for (i = 0; i < BUFF_SIZE; i++)
		buffer[i] = 0;
}
/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area copying from
 * @n: how many bytes to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: returns pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array, *helper;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}
	array = malloc(sizeof(char) * new_size);
	if (array == NULL)
		return (NULL);
	if (new_size > old_size && old_size != 0)
	{
		helper = ptr;
		for (i = 0; i < old_size; i++)
			array[i] = helper[i];
		free(ptr);
	}
	if (new_size < old_size)
	{
		helper = ptr;
		for (i = 0; i < new_size; i++)
			array[i] = helper[i];
		free(ptr);
	}
	return (array);
}
