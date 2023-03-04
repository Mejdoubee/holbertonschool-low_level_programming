#include "main.h"

/**
* _puts - puts function
* @str :  string
* Return: str to stdout
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
