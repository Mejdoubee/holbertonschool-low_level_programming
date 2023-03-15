#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
* _strdup - fun allocate memory and copy from string to allocated mem
* @str: string to point
* Return: copy of str
*/

char *_strdup(char *str)
{

	int i;
	char *s;
	int str_len;

	if (str == NULL)
		return (NULL);
	str_len = 1 + strlen(str);
	s = malloc((str_len) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < str_len; i++)
		s[i] = str[i];
	return (s);
}
