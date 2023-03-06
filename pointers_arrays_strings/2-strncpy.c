#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: s string
* @n: int the max number of bytes from src
* Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
