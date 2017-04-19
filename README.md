# Scarjo
Scarjo is a simple shell created as an end of term project for @holbertonschool.

## Table of Contents
* [**Project Details**](#project-details)
	* [Description](#description)
		* [Function Visualization](#function-visualization)
		* [File descriptions](#file-descriptions)
	* [Project Requirements](#project-requirements)
	* [Project Objectives](#what-students-should-learn-from-this-project)
* [**Project Breakdown**](#project-breakdown)
* [**Getting Started**](#getting-started)
    * [Installation](#installation)
	* [Usage](#usage)
    * [Screenshots](#screenshots)
* [**Contributing**](#contributing)
* [**Team**](#team)
* [**Resources**](#resources)

---
## Project Details

### Description
ScarJo Shell (hsh) is a simple UNIX command line shell and was built as an end of term project for [Holberton School](https://github.com/holbertonschool/). ScarJo includes many basic features present in the bash shell.

#### Function visualization
![image](https://cloud.githubusercontent.com/assets/23224088/25165641/5b9504f8-248c-11e7-8d0d-c874620cea9a.png)
To interact with image, [click here](https://sketchboard.me/XArlTLxbFDKu).

#### File descriptions

File Functions contained | Description and Return value 
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

### Project Requirements
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

### What students should learn from this project

## Project Breakdown
Task # | Type | Short description
 ---: | --- | --- | 
0 | **Mandatory** | Write a README [link](/README.md)<br>Write a man for your shell.[link](/man_1_simple_shell)<br>You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker [link](/AUTHORS)
1 | **Mandatory** | Write a beautiful code that passes the Betty checks
2 | **Mandatory** | Write a UNIX command line interpreter.<br><br>Your Shell should:<br><ul><li>Display a prompt and wait for the user to type a command. A command line always ends with a new line.</li><li>The prompt is displayed again each time a command has been executed.</li><li>The command lines are simple, no semi-columns, no pipes, no redirections or any other advanced features.</li><li>The command lines are made only of one word. No arguments will be passed to programs.</li><li>If an executable cannot be found, print an error message and display the prompt again.</li><li>Handle errors.</li><li>You have to handle the "end of file" condition (Ctrl+D). Exit with code 0</li></ul>You don't have to:<br><ul><li>use the PATH</li><li>implement built-ins</li><li>handle special characters : ", ', `, \, *, &, #</li><li>be able to move the cursor</li><li>handle commands with arguments</li></ul>
3 | ***Advanced***| Simple shell 0.1 +<br><li>Write your own getline function</li><li>Use a buffer to read many chars at once and call the least possible the readsystem call</li><li>You will need to use static variables</li><li>You are not allowed to use getline</li>You don't have to:<br><li>be able to move the cursor</li> 
4 | **Mandatory** | Simple shell 0.1 +<br><li>Handle command lines with arguments</li>
5 | ***Advanced***| Simple shell 0.2 +<br><li>You are not allowed to use strtok</li>
6 | **Mandatory** | Simple shell 0.2 +<br><li>Handle the PATH</li>
7 | **Mandatory** | Simple shell 0.3 +<br><li>Implement the exit buit-in, that exits the shell</li><li>Usage: exit</li><li>You don't have to handle any argument to the built-in exit</li>
8 | ***Advanced***| Simple shell 0.4 +<br><li>handle arguments for the built-in exit</li><li>Usage: exit status, where status is an integer used to exit the shell</li>
9 | ***Advanced***| Simple shell 0.4 +<br><li>Handle Ctrl+C: your shell should not quit when the user inputs ^C</li>man 2 signal.
10 | **Mandatory**  | Simple shell 4.0 +<br><li>Implement the env built-in, that prints the current environment</li>
11 | ***Advanced*** | Implement the setenv and unsetenv builtin commands<br>**setenv**<br><li>Initialize a new environment variable, or modify an existing one</li><li>Command syntax: setenv VARIABLE VALUE</li>**unsetenv**<br><li>Remove a environment variable</li><li>Command syntax: unsetenv VARIABLE</li>
12 | ***Advanced*** | Simple shell 1.0 +<br><br>Implement the builtin command cd:<br><li>Changes the current directory of the process.</li><li>Command syntax: cd [DIRECTORY]</li><li>If no argument is given to cd the command must be interpreted like cd $HOME</li><li>You have to handle the command cd -</li><li>You have to update the environment variable PWD when you change directory</li>man chdir, man getcwd
13 | ***Advanced*** | Simple shell 1.0 +<br>Handle the commands separator ;
14 | ***Advanced*** | Simple shell 1.0 +<br>Handle the && and || shell logical operators.
15 | ***Advanced*** | Simple shell 1.0 +<br><li>Handle aliases</li>
16 | ***Advanced*** | Simple shell 1.0 +<br><li>Handle variables replacement</li><li>Handle the $? variable</li><li>Handle the $$ variable</li>
17 | ***Advanced*** | Simple shell 1.0 +<br><li>Handle comments (#)</li>
18 | ***Advanced*** | Simple shell 1.0 +<br><li>Implement the help buit-in</li><li>Usage: help [BUILTIN]</li>
19 | ***Advanced*** | Simple shell 1.0 +<br><li>Implement the history built-in, without any argument</li><li>The history built-in displays the history list, one command by line, preceded with line numbers (starting at 0)</li><li>On exit, write the entire history, without line numbers, to a file named .simple_shell_history in the directory $HOME</li><li>When the shell starts, read the file .simple_shell_history in the directory $HOME if it exists, and set the first line number to the total number of lines in the file modulo 4096</li>
20 | ***Advanced*** | Simple shell 0.1 +<br><li>Usage: simple_shell [filename]</li><li>Your shell can take a file as a command line argument</li><li>The file contains all the commands that your shell should run before exiting</li><li>The file should contain one command per line</li><li>In this mode, the shell should not print a prompt and should not read from stdin</li>
21 | **Mandatory**  | Write a blog post describing step by step what happens when you type ls -l and hit Enter in a shell. Try to explain every step you know of, going in as much details as you can, give examples and draw diagrams when needed. You should merge your previous knowledge of the shell with the specifics of how it works under the hoods (including syscalls).
22 | ***Advanced*** | Build a test suite for your shell.<br><li>The test suite should cover every tasks from 0. to 20.</li><li>The test suite should cover every regular cases (many different examples) and edge cases possible</li><li>The entire class will work on the same test suite. Use only one repository (don't forget the README.md file)</li><li>Start adding tests asap and not just before the deadline in order to help everyone from day 0</li><li>You can take (or fork) inspiration from this example, but it is not to follow this format/way</li><li>Adopt a style and be consisten. You can for instance follow this style guide. If you chose a style that already exist, add it to the README in a style section. If you write your own, create a wiki page attached to the project and refer to it in the README style section.</li><li>If you choose to use this code, make sure to update the style accordingly</li><li>You should have an AUTHORS file, listing all individuals having contributed content to the repository. Format, see Docker</li><br>This is a task shared by everyone in the class. Everyone will get the same score for this task. Go team!

## Getting Started
Using ScarJo shell is as easy as 1-2-3! Simply clone this repository onto your local machine, compile with the flags listed below and run!

### Installation
1. Clone
```sh
git clone https://github.com/FreeJules/simple_shell.git
```
2. On your machine, navigate (`cd`) to the newly created directory then compile with the following tags.

```sh
cd simple_shell
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
3. Run shell
```sh
./hsh
```
4. Run commands and enjoy!
5. To exit
```sh
exit
```

![hsh-compilation1](https://cloud.githubusercontent.com/assets/23224088/25164687/638bb300-2487-11e7-9484-8a4a24fde768.gif)

### Usage
Once in ScarJo shell you can do interact with it as
### Screenshots
Once in ScarJo shell you can do interact 

## Contributing
This project is a closed and contributions are not accepted at this time. 

## Team

[![Julija Lee](https://avatars0.githubusercontent.com/u/6486822?v=3&s=230)](https://github.com/FreeJules/) | [![Elaine Yeung](https://avatars3.githubusercontent.com/u/23224088?v=3&s=230)](https://github.com/yeungegs)
:---:|:---:
[Julija Lee](https://github.com/FreeJules) <a target="_blank" href="https://twitter.com/leejulija"> <img src="https://cloud.githubusercontent.com/assets/23224088/24941419/2f3fc5ce-1eff-11e7-9ed3-85693579df09.png" height="20"></a> | [Elaine Yeung](https://github.com/yeungegs) <a target="_blank" href="https://twitter.com/egsy"> <img src="https://cloud.githubusercontent.com/assets/23224088/24941419/2f3fc5ce-1eff-11e7-9ed3-85693579df09.png" height="20"></a>

## Resources
* Readme template from GitHub https://guides.github.com/features/wikis/
* Docker generate-authors script https://github.com/docker/docker/blob/master/hack/generate-authors.sh




