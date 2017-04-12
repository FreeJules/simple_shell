#include "shell.h"
/**
 * prompt - calls getline until user enters exit
* @buffer: pointer to buffer to store input
* @line: pointer to a string of line input
* Return: 0 on success or 1 if _realloc failed
*/
int prompt(char *buffer, char *line)
{
	int chars_read, line_len, old_len, new_len;

	/* call getline */
	while (1)
	{
		clear_buffer(buffer);
		chars_read = _getline(buffer, BUFF_SIZE);
		if (chars_read == -1)
			break;
		/* need to handle if chars_read = BUFF_SIZE */

		/* new_len starts from 0 and includes '\0' */
		new_len = chars_read + 1;
		if (line == NULL)
			old_len = 0;
		else
			old_len = _strlen(line);
		line = _realloc(line, old_len, new_len);
		if (line == NULL)
			return (1);
		/* copy buffer content to new pointer of exact input size */
		/* if input is bigger that buffer we can reallocate extra */
		line = _memcpy(line, buffer, new_len);
		/* check if line = exit */
		if (exit_shell(line))
			break;
		line_len = _strlen(line);
		/* wasn't exit replace '\n' with '\0' */
		line[line_len - 1] = '\0';
		/*run_command(line);*/
	}
	free(line);
	free(buffer);
	return (0);
}
