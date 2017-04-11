#include "shell.h"
/**
 * _getenv - gets an environment variable. (without using getenv)
 * @name: environment variable name
 * Return: pointer to a string with that env variable
 */
char *_getenv(const char *name)
{
	char **p;

	for (p = environ; *p; p++)
	{
		if (_strncmp(*p, name, _strlen(name)) == 0)
			return (*p);
	}
	return (NULL);
}
/**
 * _putenv - adds or changes the value of environment variables
 * @str: pointer to a string
 * Return: 0 on success, or nonzero if an error occurs
 */
int _putenv(char *str)
{

	int namelen, envlen, equal, i;
	char *tmp;
	char **newenv;
	/*
	 * Find out how much of str to match when searching
	 * for a string to replace.
	 */
	tmp = _strchr(str, '=');
	namelen = find_len(str, '=');
	namelen++;
	/* Search for an existing string in the environment and find the */
	/* length of environ.  If found, replace and exit. */
	envlen = 0;
	for (i = 0; environ[i] != NULL; i++)
	{
		++envlen;
		equal = _strncmp(str, environ[i], namelen);
		if (equal == 0)
		{
			/* variable exists and found, insert the new version */
			environ[i] = str;
			return (0);
		}
	}
	/* reallocate memory for environ to store new variable */
	/* envlen size (without NULL) + 2 (for new and NULL) */
	newenv = malloc(sizeof(char *) * (envlen + 2));
	if (newenv == NULL)
		return (-1);
	/* Add in the new variable */
	i = 0;
	for (i = 0; i < envlen; i++)
		newenv[i] = environ[i];
	/* environ = newenv; */
	newenv[envlen] = str;
	newenv[envlen + 1] = NULL;
	environ = newenv;
	return (0);
}
/**
 * _setenv - changes or adds the variable to the environment with the value,
 *           if variable does not already  exist. If it does exist in the
 *           environment, then its value is changed to value if overwrite
 *           is nonzero; if overwrite is zero, then the  value of name is
 *           not  changed.
 * @name: name of the variable
 * @value: value of the variable
 * @overwrite: if 0 the value of variable is not changed
 * Return: 0 on success,  or  -1  on  error
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char *ptr;
	char *new_ptr;
	int ret_value;

/* Error = EINVAL if name is NULL, points to a string of length 0, */
/* or  contains an '=' character  */
	if (((name[0] == '\0') != 0) || (_strchr(name, '=') != NULL))
	{
		perror("Invalid argument");
		return (-1);
	}
	if ((name == NULL) || (value == NULL))
	{
		perror("Out of memory");
		return (-1);
	}
/* use _getenv(name) to get a pointer to string of variable */
	ptr = _getenv(name);
/* check overwrite, if 0 return 0 */
	if (ptr != NULL && overwrite == 0)
		return (0);
/* Error = ENOMEM if insufficient memory to add new var to the environment. */
	new_ptr = malloc(_strlen(name) + _strlen(value) + 2);
	/* +2 for '=' and null terminator */
	if (new_ptr == NULL)
	{
		perror("Out of memory");
		return (-1);
	}
/*create a string with new variable name and a value */
	new_ptr = _strcpy(new_ptr, name);
	new_ptr = _strcat(new_ptr, "=");
	new_ptr = _strcat(new_ptr, value);
	printf("%s\n", new_ptr);
/* add to environ using _putenv(new_ptr); */
	ret_value = _putenv(new_ptr);
	return (ret_value);
}
/**
 * _unsetenv - deletes the variable name from the environment. If name does
 *  not exist in the environment, then the function succeeds, and the
 *  environment is unchanged.
 * @name:name of the environment variable
 * Return: Always 0 on success, or -1 on error
 */
int _unsetenv(const char *name)
{
	list_t *head;
	char *equal;
	char *node_ptr;
	int deleted;

	equal = _strchr(name, '=');
	if ((name == NULL) || ((name[0] == '\0') != 0) || (equal != NULL))
	{
		errno = EINVAL;
		return (-1);
	}
	head = path_dirs_list(environ);
	if (head == NULL)
	{
		errno = ENOMEM;
		return (-1);
	}
	node_ptr = _getenv(name);
	deleted = delete_node(&head, node_ptr);
	return (deleted);
}
/**
 * delete_node - deletes the node with string of a list_t
 * @head: pointer to head pointer
 * @string: pointer to the node that should be deleted
 * Return: 0 if it succeeded, -1 if it failed
 */
int delete_node(list_t **head, char *string)
{
	list_t *tmp;
	list_t *removeNode;

	tmp = *head;
	while (tmp)
	{
		if (_strcmp(tmp->str, string) == 0)
		{
			removeNode = *head;
			*head = removeNode->next;
			free(removeNode);
			return (0);
		}
		if (_strcmp((tmp->next)->str, string) == 0)
		{
			removeNode = tmp->next;
			tmp->next = removeNode->next;
			free(removeNode);
			return (0);
		}
		tmp = tmp->next;
	}
	return (-1);
}
