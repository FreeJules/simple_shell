#include "shell.h"
/**
 * path_dirs_array - makes array of pointers for all dirs in the PATH
 * Return: Array of pointers
 */
char **path_dirs_array(void)
{
	char *ptr;
	char *name = "PATH";
	char *path_str;
	char delim = ':';
	char **dirs;

/* get string PATH=... from environment */
	ptr = _getenv(name);
/* duplicate string starting at char after = */
	path_str = _strdup(ptr + 5);
/* tokenize into separate string dirs */
	dirs = strtow(path_str, delim);
	if (dirs == NULL)
	{
		free(path_str);
		printf("path_dirs_array: malloc failed\n");
		return (NULL);
	}
	free(path_str);
	return (dirs);
}
/**
 * cmd_in_path - finds command in the PATH
 * @str: pointer to first string in input line (command)
 * Description: steps
 * tokenize path directories
 * check if str in path and then concat command to PATH directories
 * use access sys_call to see if it's binary executable
 * realloc memory for cmd +2 = +1 for '/' +1 for '\0'
 * Return: pointer to absolute path of command or NULL if not found
 */
char *cmd_in_path(char *str)
{
	char **path_dirs;
	char *cmd;
	int i, cmdl, strl;

	path_dirs = path_dirs_array();
	for (i = 0; path_dirs[i] != NULL; i++)
	{
		cmd = _strdup(path_dirs[i]);
		if (access(str, F_OK) == 0)
		{
			free(cmd);
			break;
		}
		cmdl = _strlen(path_dirs[i]);
		strl = _strlen(str);
		cmd = _realloc(cmd, cmdl, cmdl + strl + 2);
		cmd = _strcpy(cmd, path_dirs[i]);
		cmd = _strcat(cmd, "/");
		cmd = _strcat(cmd, str);
		if (access(cmd, F_OK) == 0)
		{
			free(str);
			str = cmd;
			break;
		}
		free(cmd);
	}
	if (path_dirs[i] == NULL)
	{
		perror(str);
		return (NULL);
	}
	free_array(path_dirs);
	return (str);
}
/**
 * run_command - runs the command typed into shell prompt
 * @str: buffer where input line was stored
 * Return: Always 0 on success, 1 on error
 */
int run_command(char *str)
{
	pid_t child_pid;
	int status;
	char **line_array;
	char *command;

	/* tokenize the line */
	line_array = strtow(str, ' ');

	child_pid = fork();
	if (child_pid == -1)
	{
		perror(ERROR);
		return (1);
	}
	if (child_pid == 0)
	{
		/* find command (first token) in the PATH */
		command = cmd_in_path(line_array[0]);
		/* run execve (abs path, rest of the tokens, env) */
		if (execve(command, line_array, environ) == -1)
		{
			perror("execve failed");
			exit(98);
		}
	}
	else
	{
		wait(&status);
	}
	free_array(line_array);
	return (0);
}
