# ScarJo
ScarJo is a simple shell created as an end of term project for @holbertonschool.

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

File | Functions contained
---: | :---
[\_getline.c](/_getline.c)	|	int _getline(char *input, int size)<br>int exit_shell(char *line)  
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
	- Reads _getline() uses _strprint to  reads an entire line from standard input, storing the address of the buffer containing the text into *lineptr.  The buffer is null-terminated and includes the newline character, if one was found.
- Return value
	- If *input is NULL, then \_getline() will allocate a buffer for storing the line, which should be freed by the user program.  (In this case, the value in \*n is ignored.)<br>On  success,  getline() return the number of characters read, including the delimiter character, but  not including  the terminating null byte ('\0').  This value can be used to handle embedded null bytes in the line read.<br>Both functions return -1 on failure to read a line  (including end-of-file condition).  In the event of an error, errno is set to indicate the cause.|
##### File: [\_strtok.c](/_strtok.c)
- Description
	- This program consists of three functions: count_words, \_wrdlen and strtow. 
- Return value
	- Returns string tokenized into words
##### File: [array_list.c](/array_list.c)
- Description
	- 
- Return value
	- 
##### File: [environment.c](/environment.c)
- Description
	- 
- Return value
	- 
##### File: [generate-authors.sh](/generate-authors.sh)
- Description
	- 
- Return value
	- 
##### File:[lists.c](/lists.c)
- Description
	- 
- Return value
	- 
##### File: [main.c](/main.c)
- Description
	- 
- Return value
	- 
##### File: [more_strings.c](/more_strings.c)
- Description
	- 
- Return value
	- 
##### File: [prints.c](/prints.c)
- Description
	- 
- Return value
	- 
##### File: [strings.c](/strings.c)
- Description
	- 
- Return value
	- 
##### File: 
- Description
	- 
- Return value
	- 

Function | Description | Return value
---: | :--- | :---
[shell.h](/shell.h) | header file for **ScarJo shell** | n/a
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
