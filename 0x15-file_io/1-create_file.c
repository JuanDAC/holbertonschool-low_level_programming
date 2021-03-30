#include "holberton.h"
#include <stdio.h>
#define S_IRWUSR (S_IRUSR | S_IWUSR)
#define O_CREATE (O_APPEND | O_WRONLY)

/**
* length_str - function that creates a file.
* @string: string
* Return: get length of string
*/
size_t length_str(const char *string)
{
	return ((*string == '\0') ? 0 : 1 + length_str(string + 1));
}

/**
* create_file - function that creates a file.
* @filename: filename
* @text_content: text_content
* Return: the actual number of letters it could read and print
*/
int create_file(const char *filename, char *text_content)
{
	int file_id;
	ssize_t number_of_bytes_written;

	if (filename == NULL)
		return (1);

	/*file_id = open(filename, O_CREATE, S_IRWUSR);*/
	file_id = open(filename, O_APPEND | O_WRONLY, 0600);

	if (file_id == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_id);
		return (1);
	}

	number_of_bytes_written = write(
		file_id,
		text_content,
		length_str(text_content)
	);

	close(file_id);

	return ((number_of_bytes_written == -1) ? -1 : 1);
}

