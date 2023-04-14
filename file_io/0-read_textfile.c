#include "main.h"


/**
* read_textfile - function that reads a text file and prints it to the\
*								POSIX standard output.
* @filename: name of the file to read
* @letters: is the number of letters it should read and print
* Return: the actual number of letters it could read and print
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t read_b, write_b;

	if (!filename)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}
	read_b = read(file, buffer, letters);
	if (read_b == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	write_b = write(STDOUT_FILENO, buffer, read_b);
	if (write_b == -1 || read_b != write_b)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (write_b);
}
