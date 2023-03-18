#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: concatenated strings
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int total, s1_len, s2_len, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	total = s1_len + s2_len + 1;
	s = malloc(total * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
