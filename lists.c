#include "shell.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked List
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node in the list
 * @str: second node in the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * add_node_end - check the code for Holberton School students.
 * @head: pointer to first node in linked list
 * @str: data to be copied to string field of the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (1)
		{
			if (tail->next == NULL)
			{
				tail->next = new;
				break;
			}
			tail = tail->next;
		}
	}
	return (new);
}
/**
 * free_list - frees a list_t list
 * @head: linked list to free
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (1)
	{
		if (head == NULL)
			break;
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
