#include "shell.h"
int main(int argc __attribute__((__unused__)), char *argv[] __attribute__((__unused__)))
{
        char *buffer, *line;
        int ret_val;
/*
 *      int i;
 *      for(i = 1; argv[i] != NULL; i++)
 *      {
 *              printf("%s\n",argv[i]);
 *              }
 */
        /* create a buffer to store input */
        buffer = malloc(sizeof(char) * BUFF_SIZE);
        if (buffer == NULL)
                return (1);
        line = NULL;
        /* call prompt */
        ret_val = prompt(buffer, line);
        return (ret_val);
}
