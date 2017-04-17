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

#### Function Prototypes

File | Functions contained | Description and Return value |
---: | :--- | :---
[shell.h](/shell.h)	|	n/a | <ul><li>Description</li>  <ul><li>header file for **ScarJo shell**</li></ul><li>Return value</li><ul><li>n/a</li></ul></ul> |
[\_getline.c](/_getline.c)	|	int _getline(char *input, int size)<br>int exit_shell(char *line) | <ul><li>Description</li>	<ul><li>\_getline() uses _strprint to  reads an entire line from standard input, storing the address of the buffer containing the text into *lineptr.  The buffer is null-terminated and includes the newline character, if one was found.</li></ul><li>Return value</li>	<ul><li>If *input is NULL, then \_getline() will allocate a buffer for storing the line, which should be freed by the user program.  (In this case, the value in \*n is ignored.)</li>	<li>On  success,  \_getline() return the number of characters read, including the delimiter character, but  not including  the terminating null byte ('\0').  This value can be used to handle embedded null bytes in the line read.</li>	<li>Both functions return -1 on failure to read a line  (including end-of-file condition).  In the event of an error, errno is set to indicate the cause.</li></ul></ul>
[\_strtok.c](/_strtok.c)		|	int count_words(char *str, char delim)<br>int _wrdlen(char *s, char delim)<br>char **strtow(char *str, char delim)
[array_list.c](/array_list.c)	|	int arr_size(char **arr)<br>list_t *array_to_list(char **array)
[environment.c](/environment.c)	|	char *_getenv(const char *name)<br>int _putenv(char *str)<br>int _setenv(const char *name, const char *value, int overwrite)<br>int _unsetenv(const char *name)<br>int delete_node(list_t **head, char *string)
[lists.c](/lists.c)		|	size_t print_list(const list_t *h)<br>size_t list_len(const list_t *h)<br>list_t *add_node(list_t **head, const char *str)<br>list_t *add_node_end(list_t **head, const char *str)<br>void free_list(list_t *head)
[more_strings.c](/more_strings.c)	| int _strcmp(char *s1, char *s2)<br>char *_strchr(const char *str, char c)<br>int len_to_char(char *str, char c)
[prints.c](/prints.c)	| int _putchar(char c)<br>void _strprint(char *str)<br>void print_array(char **array)
[strings.c](/strings.c)	| int _strlen(const char *s)<br>int _strncmp(char *s1, const char *s2, int n)<br>char *_strcpy(char *dest, const char *src)<br>char *_strcat(char *dest, const char *src)<br>char *_strdup(char *str)

#### File descriptions


##### File: [shell.h](/shell.h)
- Description
	- header file for **ScarJo shell**
- Return value
	- n/a

##### File: [\_getline.c](/_getline.c)
- Description
	- \_getline() uses _strprint to  reads an entire line from standard input, storing the address of the buffer containing the text into *lineptr.  The buffer is null-terminated and includes the newline character, if one was found.
- Return value
	- If *input is NULL, then \_getline() will allocate a buffer for storing the line, which should be freed by the user program.  (In this case, the value in \*n is ignored.)
	- On  success,  \_getline() return the number of characters read, including the delimiter character, but  not including  the terminating null byte ('\0').  This value can be used to handle embedded null bytes in the line read.
	- Both functions return -1 on failure to read a line  (including end-of-file condition).  In the event of an error, errno is set to indicate the cause.

##### File: [\_strtok.c](/_strtok.c)
- Description
	- This program is our implementation of the strtok() function which extracts tokens from strings.
	- The  \_strtok()  function breaks a string into a sequence of zero or more nonempty tokens.  On the first call to \_strtok() the string to be parsed should be specified in `str`.  In each subsequent call that should parse the same string, `str` must be NULL.
       - The delim argument specifies a set of bytes that delimit the tokens in the parsed string.  The caller may specify different strings in delim in successive calls that parse the same string.
       - Each call to \_strtok() returns a pointer to a null-terminated string containing the next token.  This string does not include the delimiting byte. If no  more tokens are found, \_strtok() returns `NULL`.
- Return value
	- Returns string tokenized into words
	- The `_strtok()` functions return a pointer to the next token, or `NULL` if there are no more tokens.

##### File: [array_list.c](/array_list.c)
- Description
	- This program builds a linked list of an array of pointers.
- Return value
	- A pointer of type `list_t` to head

##### File: [environment.c](/environment.c)
- Description
	- Contains helper functions that interact with environment variables.
	  - `*_getenv(const char *name)` - searches environment list to find environment variable **name** and returns a pointer to the corresponding **value** string.
	  - `int _putenv(char *str)` - changes or adds value of an environment variable
	  - `int _setenv(const char *name, const char *value, int overwrite)` - change or add an environment variable
	  - `int _unsetenv(const char *name)` - deletes the environment variable name from the environment
	  - `int delete_node(list_t \**head, char *string)` - deletes the node with string of of a list_t
- Return value
	- `*\_getenv(const char *name)` - returns a pointer to the value in the environment, or NULL if there is no match
	- `\_putenv()` - returns zero on success, or nonzero  if an  error  occurs. In the event of an error, errno is set to indicate the cause.
	- `\_setenv()` - returns zero on success, or -1 on error, with **errno** set to indicate the cause of the error
	- `\_unsetenv()` - returns zero on success, or -1 on error, with **errno** set to indicate the cause of the error
	- `delete_node()` - returns 0 on success, or -1 on error

##### File:[lists.c](/lists.c)
- Description
	- `print_list(const list_t *h)` - prints all elements of a linked list pointed to by **\*h**
	- `size_t list_len(const list_t *h)` - calculates the number of elements in a linked list pointed to by **\*h**
	- `list_t *add_node(list_t **head, const char *str)` - adds node to the beginning of a linked list
	- `list_t *add_node_end(list_t **head, const char *str)` - adds node to the end of a linked list
	- `void free_list(list_t *head)` - frees a linked list of type
- Return value
	- `print_list()` - prints elements of list to stdout
	- `size_t list_len()` - length of list
	- `list_t *add_node()` - address of the new element, NULL if failed
	- `list_t *add_node_end()` - address of the new element, NULL if failed
	- `void free_list()` - n/a

##### File: [main.c](/main.c)
- Description
	- description
- Return value
	- return

##### File: [more_strings.c](/more_strings.c)
- Description
	- int _strcmp(char *s1, char *s2)
	- char *_strchr(const char *str, char c)
	- int len_to_char(char *str, char c)
	- int _putchar(char c)
	- void _strprint(char *str)
	- void print_array(char **array)
- Return value
	- return

##### File: [prints.c](/prints.c)
- Description
	- description
- Return value
	- return

##### File: [strings.c](/strings.c)
- Description
	- _strlen(const char *s)
	- int _strncmp(char *s1, const char *s2, int n)
	- char *_strcpy(char *dest, const char *src)
	- char *_strcat(char *dest, const char *src)
	- char *_strdup(char *str)
- Return value
	- return

##### File:
- Description
	- description
- Return value
	- return

Function | Description | Return value
---: | :--- | :---
[shell.h](/shell.h) | header file for **ScarJo shell** | 
[\_getline.c](/_getline.c) | Reads _getline() uses _strprint to  reads an entire line from standard input, storing the address of the buffer containing the text into *lineptr.  The buffer is null-terminated and includes the newline character, if one was found.| If *input is NULL, then \_getline() will allocate a buffer for storing the line, which should be freed by the user program.  (In this case, the value in \*n is ignored.)<br>On  success,  getline() return the number of characters read, including the delimiter character, but  not including  the terminating null byte ('\0').  This value can be used to handle embedded null bytes in the line read.<br>Both functions return -1 on failure to read a line  (including end-of-file condition).  In the event of an error, errno is set to indicate the cause.|
[\_strtok.c](/_strtok.c) | This program consists of three functions: count_words, \_wrdlen and strtow. | Returns string tokenized into words
[array_list.c](/array_list.c) | program description |
[environment.c](/environment.c) | program description |
[generate-authors.sh](/generate-authors.sh) | program description |
[lists.c](/lists.c) | program description |
[main.c](/main.c) | program description |
[more_strings.c](/more_strings.c) | program description |
[prints.c](/prints.c) | program description |
[strings.c](/strings.c) | program description |

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
Clone this repository to your local machine by Your shell will be compiled this way:
```C
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

*Installation is the next section in an effective README. Tell other users how to install your project locally. Optionally, include a gif to make the process even more clear for other people.*

### Setup

### Usage
*The next section is usage, in which you instruct other people on how to use your project after they’ve installed it. This would also be a good place to include screenshots of your project in action.*

Description | Screenshot
:--- | :---
 |
 |

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


<li>File: [\_strtok.c](/_strtok.c)</li>
<li><li>Description</li></li>
	<li>This program is our implementation of the strtok() function which extracts tokens from strings.</li>
	<li>The  \_strtok()  function breaks a string into a sequence of zero or more nonempty tokens.  On the first call to \_strtok() the string to be parsed should be specified in `str`.  In each subsequent call that should parse the same string, `str` must be NULL.</li>
<li>       The delim argument specifies a set of bytes that delimit the tokens in the parsed string.  The caller may specify different strings in delim in successive calls that parse the same string.</li>
<li>       Each call to \_strtok() returns a pointer to a null-terminated string containing the next token.  This string does not include the delimiting byte. If no  more tokens are found, \_strtok() returns `NULL`.</li>
<li>Return value</li>
	<li>Returns string tokenized into words</li>
	<li>The `_strtok()` functions return a pointer to the next token, or `NULL` if there are no more tokens.</li>

<li>File: [array_list.c](/array_list.c)</li>
<li><li>Description</li></li>
	<li>This program builds a linked list of an array of pointers.</li>
<li>Return value</li>
	<li>A pointer of type `list_t` to head</li>

<li>File: [environment.c](/environment.c)</li>
<li><li>Description</li></li>
	<li>Contains helper functions that interact with environment variables.</li>
	<li>  `*_getenv(const char *name)` searches environment list to find environment variable **name** and returns a pointer to the corresponding **value** string.</li>
	<li>  `int _putenv(char *str)` changes or adds value of an environment variable</li>
	<li>  `int _setenv(const char *name, const char *value, int overwrite)` change or add an environment variable</li>
	<li>  `int _unsetenv(const char *name)` deletes the environment variable name from the environment</li>
	<li>  `int delete_node(list_t \**head, char *string)` deletes the node with string of of a list_t</li>
<li>Return value</li>
	<li>`*\_getenv(const char *name)` returns a pointer to the value in the environment, or NULL if there is no match</li>
	<li>`\_putenv()` returns zero on success, or nonzero  if an  error  occurs. In the event of an error, errno is set to indicate the cause.</li>
	<li>`\_setenv()` returns zero on success, or -1 on error, with **errno** set to indicate the cause of the error</li>
	<li>`\_unsetenv()` returns zero on success, or -1 on error, with **errno** set to indicate the cause of the error</li>
	<li>`delete_node()` returns 0 on success, or -1 on error</li>

<li>File:[lists.c](/lists.c)</li>
<li><li>Description</li></li>
	<li>`print_list(const list_t *h)` prints all elements of a linked list pointed to by **\*h**</li>
	<li>`size_t list_len(const list_t *h)` calculates the number of elements in a linked list pointed to by **\*h**</li>
	<li>`list_t *add_node(list_t **head, const char *str)` adds node to the beginning of a linked list</li>
	<li>`list_t *add_node_end(list_t **head, const char *str)` adds node to the end of a linked list</li>
	<li>`void free_list(list_t *head)` frees a linked list of type</li>
<li>Return value</li>
	<li>`print_list()` prints elements of list to stdout</li>
	<li>`size_t list_len()` length of list</li>
	<li>`list_t *add_node()` address of the new element, NULL if failed</li>
	<li>`list_t *add_node_end()` address of the new element, NULL if failed</li>
	<li>`void free_list()` n/a</li>

<li>File: [main.c](/main.c)</li>
<li><li>Description</li></li>
	<li>description</li>
<li>Return value</li>
	<li>return</li>

<li>File: [more_strings.c](/more_strings.c)</li>
<li><li>Description</li></li>
	<li>int _strcmp(char *s1, char *s2)</li>
	<li>char *_strchr(const char *str, char c)</li>
	<li>int len_to_char(char *str, char c)</li>
	<li>int _putchar(char c)</li>
	<li>void _strprint(char *str)</li>
	<li>void print_array(char **array)</li>
<li>Return value</li>
	<li>return</li>

<li>File: [prints.c](/prints.c)</li>
<li><li>Description</li></li>
	<li>description</li>
<li>Return value</li>
	<li>return</li>

<li>File: [strings.c](/strings.c)</li>
<li><li>Description</li></li>
	<li>_strlen(const char *s)</li>
	<li>int _strncmp(char *s1, const char *s2, int n)</li>
	<li>char *_strcpy(char *dest, const char *src)</li>
	<li>char *_strcat(char *dest, const char *src)</li>
	<li>char *_strdup(char *str)</li>
<li>Return value</li>
	<li>return</li>

<li>File:</li>
<li><li>Description</li></li>
	<li>description</li>
<li>Return value</li>
	<li>return</li>


