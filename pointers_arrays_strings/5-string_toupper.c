#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @str: array of int
* Return: return lower to upper
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	i++;
	}
	return (str);
}
