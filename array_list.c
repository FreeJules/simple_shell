#include "shell.h"
/**
 * arr_size - finds size of array
 * @arr: array of pointers to strings
 * Return: size of the array
 */

int arr_size(char **arr)
{
	int i;

	if (arr == NULL || *arr == NULL)
		return (-1);
	i = 0;
	while (arr[i])
		i++;
	return (i);
}
/**
 * array_to_list - builds a linked list of array of pointers
 * @array: array of pointers to strings
 * Return: pointer to head
 */
list_t *array_to_list(char **array)
{
	list_t *head;
	list_t *new;
	int i;

	head = NULL;
	for (i = 0; array[i] != NULL; i++)
	{
		new = add_node_end(&head, array[i]);
		if (new == NULL)
		{
			free_list(head);
			return (NULL);
		}
	}
	return (head);
}
