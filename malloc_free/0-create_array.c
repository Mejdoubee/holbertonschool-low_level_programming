#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - function that creates an array of chars with specific char
* @size: unsigned int indicate the length of array
* @c: char
* Return: array filled with specific char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (buffer);
}
