#include "main.h"
#include "string.h"

/**
* puts2 - puts even line
* @str: string
* Retun: even line
*/

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
