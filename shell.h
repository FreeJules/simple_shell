#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFF_SIZE 1024
#define PROMPT "$ "
/* error messages */
#define EINVAL "Invalid argument"
#define ENOMEM "Out of memory"
#define ERROR "Error"
#define WRONG "Something went wrong"
#define END "exit\n"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
extern char **environ;
/* lists.c */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
/* prints.c */
int _putchar(char c);
void _strprint(char *str);
void print_array(char **array);
/* strings.c */
int _strlen(const char *s);
int _strncmp(char *s1, const char *s2, int n);
char *_strdup(char *str);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
/* more_strings */
int _strcmp(char *s1, char *s2);
char *_strchr(const char *str, char c);
int len_to_char(char *str, char c);
/* strtok.c */
int count_words(char *str, char delim);
int _wrdlen(char *s, char delim);
char **strtow(char *str, char delim);
/*  array_list.c */
int arr_size(char **arr);
list_t *array_to_list(char **array);
char **list_to_array(const list_t *head);
void free_array(char **array);
/* environment.c */
char *_getenv(const char *name);
int _putenv(char *str);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);
int delete_node(list_t **head, char *string);
/* _getline.c */
int _getline(char *input, int size);
int exit_shell(char *line);
void clear_buffer(char *buffer);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/* prompt.c */
int prompt(char *buffer, char *line);
/* run_command */
void run_command(char *line);
#endif
