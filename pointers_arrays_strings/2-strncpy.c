#include "main.h"

/**
* _strlen - count lenght
* @s : string
* Return: lenght
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* _strncpy - copies a string
* @dest: destination string
* @src: s string
* @n: int the max number of bytes from src
* Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = _strlen(src);
	for (i = 0; i < n; i++)
		if (i < j)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	return (dest);
}
