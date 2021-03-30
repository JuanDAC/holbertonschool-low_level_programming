#include "holberton.h"

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
* append_text_to_file - function that appends text at the end of a file.
* @filename: filename
* @text_content: text_content
* Return: size
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_id = 0;
	size_t size;

	if (!filename)
	return (-1);

	file_id = open(filename, O_APPEND | O_WRONLY, 0600);
	if (file_id == -1)
		return (-1);

	size = length_str(text_content);

	if (write(file_id, text_content, size) == -1)
		return (-1);

	close(file_d);
	return (1);
}









