#include "holberton.h"

/**
* read_textfile - function that reads a text file and prints it to the POSIX
*        standard output.
*
* @filename: filename
* @letters: letters
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_id;
	ssize_t number_of_bytes_read;
	ssize_t number_of_bytes_written;

	file_id = open(filename, O_RDONLY);
	if (file_id == -1)
		return (0);

	buffer = malloc(sizeof(*filename) * letters);

	if ((filename == NULL) | (buffer == NULL) | !letters)
	{
		close(file_id);
		return (0);
	}

	number_of_bytes_read = read(file_id, buffer, letters);
	close(file_id);
	if (number_of_bytes_read == -1)
		return (0);

	number_of_bytes_written = write(1, buffer, (size_t)number_of_bytes_read);
	if (number_of_bytes_written == -1)
		return (0);

	free(buffer);
	return (number_of_bytes_read);
}

