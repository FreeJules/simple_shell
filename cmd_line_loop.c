#include "shell.h"
/**
 * cmd_line_loop - calls getline until user enters exit or EOF(ctrl^D)
 * @buffer: pointer to buffer to store input
 * @line: pointer to a string of line input
 * @env_head: pointer to head of environ list
 * Return: 0 on success or 1 if _realloc failed
 */
int cmd_line_loop(char *buffer, char *line, list_t **env_head)
{
	int chars_read, old_len, new_len, retval_bi, retval, ec1, ec2;
	char **line_tok;
	list_t *tmp;

	tmp = *env_head;
	retval = 0;
	while (1)
	{
		clear_buffer(buffer);
		chars_read = _getline(buffer, BUFF_SIZE);
		if (chars_read == -1)  /* EOF  */
			break;
		new_len = chars_read + 1;
		if (line == NULL)
			old_len = 0;
		else
			old_len = _strlen(line);
		line = _realloc(line, old_len, new_len);
		if (line == NULL)
		{
			perror("Insuficient memory: unable to relocate line");
			retval = 1;
			break;
		}
		line = _memcpy(line, buffer, new_len);
		if (line[0] != '\0')
		{
			line_tok = strtow(line, ' '); /* tokenize input line */
			retval_bi = built_ins(line_tok, &tmp); /* if built-in */
			retval = retval_bi;
			ec1 = exit_shell(line_tok[0]); /*exit check 1 */
			ec2 = arr_size(line_tok) < 3; /* exit check 2 */
			if (ec1 && ec2 && retval != -1) /* if exit check */
				break;
			if (retval_bi == -1) /*not builtin,check if binary exe*/
				retval = run_command(line_tok, &tmp);
		}
	}
	free_array(line_tok);
	return (retval);
}
