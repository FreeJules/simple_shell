# Scarjo
Scarjo is a simple shell created as an end of term project for @holbertonschool.

### Table of Contents
* [**Project Details**](#project-details)
	* [Description](#description)
		* [Function Prototypes](#function-prototypes)
		* [File descriptions](#file-descriptions)
	* [Requirements](#requirements)
	* [Support](#support)
* [**Getting Started**](#getting-started)
    * [Installation](#installation)
    * [Setup](#setup)
	* [Usage](#usage)
    * [Screenshots](#screenshots)
* [**Contributing**](#contributing)
	* [Credits](#credits)
	* [Resources](#resources)

---
## Project Details

### Description
A description of your project follows. A good description is clear, short, and to the point. Describe the importance of your project, and what it does.
ScarJo Shell (hsh) is a simple UNIX command line shell and was built as an end of term project for [Holberton School](https://github.com/holbertonschool/). ScarJo includes many basic features present in the bash shell.
#### File descriptions

File Functions contained | Description and Return value |
------ | :---
**[\_getline.c](/_getline.c)**<ul><li>int _getline(char *input, int size)</li><li>int exit_shell(char *line)</li></ul> | <ul><li>Description</li>	<ul><li>\_getline() uses _strprint to  reads an entire line from standard input, storing the address of the buffer containing the text into *lineptr.  The buffer is null-terminated and includes the newline character, if one was found.</li></ul><li>Return value</li>	<ul><li>If *input is NULL, then \_getline() will allocate a buffer for storing the line, which should be freed by the user program.  (In this case, the value in \*n is ignored.)</li>	<li>On  success,  \_getline() return the number of characters read, including the delimiter character, but  not including  the terminating null byte ('\0').  This value can be used to handle embedded null bytes in the line read.</li>	<li>Both functions return -1 on failure to read a line  (including end-of-file condition).  In the event of an error, errno is set to indicate the cause.</li></ul></ul>
**[\_strtok.c](/_strtok.c)**<ul><li>int count_words(char *str, char delim)</li><li>int _wrdlen(char *s, char delim)</li><li>char **strtow(char *str, char delim)</li></ul> | <ul><li>Description</li><ul><li>This program is our implementation of the strtok() function which extracts tokens from strings.</li>	<li>The  \_strtok()  function breaks a string into a sequence of zero or more nonempty tokens.  On the first call to \_strtok() the string to be parsed should be specified in `str`.  In each subsequent call that should parse the same string, `str` must be NULL.</li><li>       The delim argument specifies a set of bytes that delimit the tokens in the parsed string.  The caller may specify different strings in delim in successive calls that parse the same string.</li><li>       Each call to \_strtok() returns a pointer to a null-terminated string containing the next token.  This string does not include the delimiting byte. If no  more tokens are found, \_strtok() returns `NULL`.</li></ul><li>Return value</li><ul>	<li>Returns string tokenized into words</li>  <li>The `_strtok()` functions return a pointer to the next token, or `NULL` if there are no more tokens.</li></ul></ul>
**[array_list.c](/array_list.c)**<ul><li>`int arr_size(char **arr)`</li><li>`list_t *array_to_list(char **array)`</li></ul> | <ul><li><li>Description</li></li>  <ul>	<li>This program builds a linked list of an array of pointers.</li></ul><li>Return value</li><ul><li>A pointer of type `list_t` to head</li></ul></ul>
**[lists.c](/lists.c)**<ul><li>`size_t print_list(const list_t *h)`</li><li>`size_t list_len(const list_t *h)`</li><li>`list_t *add_node(list_t \*\*head, const char *str)`</li><li>`list_t *add_node_end(list_t \*\*head, const char *str)`</li><li>`void free_list(list_t *head)`</li></ul> | <ul><li>Description</li><ul><li>`print_list(const list_t *h)` prints all elements of a linked list pointed to by **\*h**</li><li>`size_t list_len(const list_t *h)` calculates the number of elements in a linked list pointed to by **\*h**</li><li>`list_t *add_node(list_t **head, const char *str)` adds node to the beginning of a linked list</li><li>`list_t *add_node_end(list_t **head, const char *str)` adds node to the end of a linked list</li><li>`void free_list(list_t *head)` frees a linked list of type</li></ul><li>Return value</li><ul><li>`print_list()` prints elements of list to stdout</li><li>`size_t list_len()` length of list</li><li>`list_t *add_node()` address of the new element, NULL if failed</li><li>`list_t *add_node_end()` address of the new element, NULL if failed</li><li>`void free_list()` n/a</li></ul></ul>
**[main.c](/main.c)** | - | - |
**[more_strings.c](/more_strings.c)** <ul><li> _strcmp(char *s1, char *s2)</li><li>char *_strchr(const char *str, char c)</li><li>int len_to_char(char *str, char c)</li></ul> | <ul><li>Description</li><ul><li>`int _strcmp(char *s1, char *s2)` - compare strings **s1** and **s2**</li><li>char *_strchr(const char *str, char c) - locate character in a string</li><li>`int len_to_cha r(char *str, char c)` - calculate length of string **str** up to char **c**</li><\ul><li>Return value</li><ul><li>`int _strcmp(char *s1, char *s2)` - return an integer less than, equal to, or greater than zero if **s1** is found to be less than, to match, or to be greater than **s2**</li><li>char *_strchr(const char *str, char c) - a pointer to the matched character or NULL if the character is not found. </li><li>int len_to_char(char *str, char c) - length of string before char, 0 if char not found</li></ul> |
**[prints.c](/prints.c)** <ul><li>int _putchar(char c)</li><li>void _strprint(char *str)</li><li>void print_array(char \**array)</li></ul>| <ul><li>Description</li><ul><li>`_putchar` - writes the character **c** to stdout</li><li>_strprint - prints a string</li><li>print_array - Prints an array of strings</li></ul><li>Return value</li><ul><li>Return: On success 1. On error, -1 is returned, and errno is set appropriately.</li></ul></ul> |
**[shell.h](/shell.h)** | <ul><li>Description</li>  <ul><li>header file for **ScarJo shell**</li></ul><li>Return value</li><ul><li>n/a</li></ul></ul> |
**[strings.c](/strings.c)** <ul><li>int _strlen(char *s)</li>  <li>int _strncmp(char *s1, char *s2, int n)</li>  <li>char *_strcpy(char *dest, char *src)</li>  <li>char *_strcat(char *dest, char *src)</li>  <li>char *_strdup(char *str)</li></li></ul> | <ul><li>Description</li><ul><li>`_strlen(const char *s)` returns the length of a string</li><li>int _strncmp(char *s1, const char *s2, int n) - compares two strings for n amount of chars</li><li>char *_strcpy(char *dest, const char *src) - copies the string with \0 to the buffer</li><li>char *_strcat(char *dest, const char *src) - appends the src string to the dest string</li><li>char *_strdup(char *str) - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter </li></ul><li>Return value</li><ul><li>_strlen(const char *s) - Return: 0 on success</li><li>int _strncmp(char *s1, const char *s2, int n) - Return: 0 if identical</li><li>char *_strcpy(char *dest, const char *src) - Return: the pointer to dest</li><li>char *_strcat(char *dest, const char *src) - pointer to resulting string dest</li><li>char *_strdup(char *str) - pointer to new string or NULL if str = NULL</li></ul></ul>
**[built_ins.c](/built_ins.c)** <ul><li>int built_ins(char **input, list_t **env_head)</li><li>int exit_bi(char **line)</li><li>int print_env(char **line, list_t **env_head)</li><li>int set_env(char **line, list_t **env_head)</li><li>int unset_env(char **line, list_t **env_head)</li></ul> | <ul><li>Description</li>  <ul>    <li>`built_ins` - checks if command is a built-in @input: tokenized line from the command line @env_head: pointer to environ list</li><li>exit_bi - exits shell with given status @line: tokenized line from command line @env_head: pointer to environ list</li><li>print_env - prints current environ @line: tokenized line from command line @env_head: pointer to environ list</li><li>set_env - initializes a new environment variable, or modify an existing one @line: tokenized line from command line @env_head: pointer to environ list</li><li>unset_env - removes environment variable @line: tokenized line from command line @env_head: pointer to environ list</li></ul><li>Return value</li><ul>  <li>`built_ins` - 0 on success, 1 on error, -1 if not found</li><li>exit_bi - 0 on success, 1 on error</li><li>print_env - 0 on success, 1 on error</li><li>set_env - 0 on success, 1 on error</li><li>unset_env - 0 on success, 1 on error</li></ul></ul> |
**[cmd_line_loop.c](/cmd_line_loop.c)** `int cmd_line_loop(char *buffer, char *line, list_t **env_head)` | <ul>  <li>Description</li><ul><li>cmd_line_loop - calls getline until user enters exit or EOF(ctrl^D) @buffer: pointer to buffer to store input @line: pointer to a string of line input @env_head: pointer to head of environ list</li></ul><li>Return value</li><ul><li>Return: 0 on success or 1 if _realloc failed</li></ul></ul> |
**[new_env.c](/new_env.c)** <ul><li>`char *_getenv(char *name, list_t **env_head)`</li><li>`int _setenv(char *name, char *value, list_t **env_head)`</li><li>`int _unsetenv(char *name, list_t **env_head)`</li><li>`int delete_node(list_t **head, char *string)`</li><li>`char *var_str(char *name, char *value)`</li></ul> | <ul>  <li>Description</li><ul><li>_getenv - gets an environment variable. (without using getenv) @name: environment variable name @env_head: pointer to environ list</li><li>_setenv - changes or adds the variable to the environment with the value, if variable does not already exist. If it does exist in the environment, then its value is changed to value @name: name of the variable @value: value of the variable @env_head: pointer to environ list</li><li>_unsetenv - deletes the variable name from the environment. If name does not exist in the environment, then the function succeeds, and the environment is unchanged. @name:name of the environment variable @env_head: pointer to environ list</li><li>delete_node - deletes the node with string of a list_t @head: pointer to head pointer @string: pointer to the node that should be deleted</li><li>var_str - creates new variable string @name: name of the variable @value: value of the variable</li></ul><li>Return value</li><ul><li>_getenv - pointer to a string with that env variable or NULL if not found</li><li>_setenv - pointer to head of the list or NULL if it failed</li><li>_unsetenv - Always 0 on success, or 1 on error</li><li>delete_node - 0 if it succeeded, 1 if it failed</li><li>var_str - pointer to new string or NULL if failed</li></ul></ul> |
**[run_command.c](/run_command.c)** <ul><li>`char **path_dirs_array(list_t **env_head)`</li><li>`char *cmd_in_path(char *str, list_t **env_head)`</li><li>`int run_command(char **line_tok, list_t **env_head, char *buffer)`</li></ul> | <ul>Description<ul><li>`path_dirs_array` - makes array of pointers for all dirs in the PATH</li><li>`cmd_in_path` - finds command in the PATH @str: pointer to first string in input line (command) @env_head: pointer to environ list</li><li>`run_command` - runs the command typed into shell prompt @line_tok: tokenized input line @env_head: pointer to environ list</li></ul>Return value<ul><li>`path_dirs_array` - Return: Array of pointers</li><li>`cmd_in_path` - Return: pointer to absolute path of command or NULL if not found</li><li>`run_command` - Return: Always 0 on success, 1 on error</li></ul></ul> |
**[environment.c](/environment.c)**<ul><li>`char \*_getenv(const char *name)`</li><li>int _putenv(char *str)</li><li>int _setenv(const char *name, const char *value, int overwrite)</li><li>int _unsetenv(const char *name)</li><li>`int delete_node(list_t \*\*head, char *string)`</li></ul> | <ul><li>Description</li>	<ul><li>Contains helper functions that interact with environment variables.</li>	<li>  `*_getenv(const char *name)` searches environment list to find environment variable **name** and returns a pointer to the corresponding **value** string.</li>	<li>  `int _putenv(char *str)` changes or adds value of an environment variable</li>	<li>  `int _setenv(const char *name, const char *value, int overwrite)` change or add an environment variable</li>	<li>  `int _unsetenv(const char *name)` deletes the environment variable name from the environment</li>	<li>  `int delete_node(list_t \**head, char *string)` deletes the node with string of of a list_t</li></ul><li>Return value</li><ul><li>`*\_getenv(const char *name)` returns a pointer to the value in the environment, or NULL if there is no match</li>	<li>`\_putenv()` returns zero on success, or nonzero  if an  error  occurs. In the event of an error, errno is set to indicate the cause.</li>	<li>`\_setenv()` returns zero on success, or -1 on error, with **errno** set to indicate the cause of the error</li>	<li>`\_unsetenv()` returns zero on success, or -1 on error, with **errno** set to indicate the cause of the error</li>	<li>`delete_node()` returns 0 on success, or -1 on error</li></ul></ul>

### Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` (`C90`) using the flags `-Wall -Werror -Wextra and -pedantic`

[![image](https://cloud.githubusercontent.com/assets/23224088/24430835/7d83286c-13cd-11e7-9083-aadb330906b8.png)](https://twitter.com/egsy/status/833533513936703489)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- No more than 5 functions per file
- All your header files should be include guarded
- Unless specified otherwise, your program must have the exact same output as `sh` as long as the exact same error output.

### Support

## Getting Started
To use this shell first clone https://github.com/FreeJules/simple_shell.git
### Installation
Clone this repository to your local machine by 

On your machine compile with the following tags
```C
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
![hsh-compilation](https://cloud.githubusercontent.com/assets/23224088/25164495/2baef358-2486-11e7-8d66-3ed61adc1004.gif)

*Installation is the next section in an effective README. Tell other users how to install your project locally. Optionally, include a gif to make the process even more clear for other people.*

### Setup

### Usage
*The next section is usage, in which you instruct other people on how to use your project after they’ve installed it. This would also be a good place to include screenshots of your project in action.*

## Contributing
Larger projects often have sections on contributing to their project, in which contribution instructions are outlined. Sometimes, this is a separate file. If you have specific contribution preferences, explain them so that other developers know how to best contribute to your work. To learn more about how to help others contribute, check out the guide for (setting guidelines for repository contributors)[https://help.github.com/articles/setting-guidelines-for-repository-contributors/].

### Team

[![Julija Lee](https://avatars0.githubusercontent.com/u/6486822?v=3&s=230)](https://github.com/FreeJules/) | [![Elaine Yeung](https://avatars3.githubusercontent.com/u/23224088?v=3&s=230)](https://github.com/yeungegs)
:---:|:---:
[Julija Lee](https://github.com/FreeJules) <a target="_blank" href="https://twitter.com/leejulija"> <img src="https://cloud.githubusercontent.com/assets/23224088/24941419/2f3fc5ce-1eff-11e7-9ed3-85693579df09.png" height="20"></a> | [Elaine Yeung](https://github.com/yeungegs) <a target="_blank" href="https://twitter.com/egsy"> <img src="https://cloud.githubusercontent.com/assets/23224088/24941419/2f3fc5ce-1eff-11e7-9ed3-85693579df09.png" height="20"></a>

### License
Finally, include a section for the license of your project. For more information on choosing a license, check out GitHub’s licensing guide!

### Resources
* Readme template from GitHub https://guides.github.com/features/wikis/
* Docker generate-authors script https://github.com/docker/docker/blob/master/hack/generate-authors.sh
