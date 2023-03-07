#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strstr - function that locates a substring
* @haystack: char to check
* @needle: strings
* Return: strings located
*/

char *_strstr(char *haystack, char *needle)
{
	size_t haystack_len = strlen(haystack);
	size_t needle_len = strlen(needle);
	size_t i, j;

	if (!haystack || !needle)
		return (NULL);
	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
		if (haystack[i + j] != needle[j])
			break;
		if (j == needle_len - 1)
			return (haystack + i);
		}
	}
	return (NULL);
}
