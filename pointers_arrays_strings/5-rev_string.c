#include "main.h"

/**
* rev_string - reverse string
* @s: string
* Return: reverse string
*/
void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0, j = len - 1;
	char store;

	while (i < j)
	{
		store = s[i];
		s[i] = s[j];
		s[j] = store;
		i++;
		j--;
	}
}
