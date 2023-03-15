#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup - fun allocate memory and copy from string to allocated mem
* @str: string to point
* Return: copy of str
*/

char *_strdup(char *str)
{
	int i;
	char *s;
	int size_t = strlen(str);

	if (str == NULL)
		return (NULL);
	s = malloc(size_t *sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size_t; i++)
		s[i] = str[i];
	return (s);
}
