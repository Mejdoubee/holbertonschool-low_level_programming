#include "main.h"

/**
* print_diagonal - diagonal print
* @n: int
* Return: n print value
*/

void print_diagonal(int n)
{
/**
	int a;

	if (n > 0)
	for (a = 0; a < n; a++)
	{
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
*/
	int a;

	for(a = 0; a < n; a++)
		_putchar(' ');
	if(a > 0)
		_putchar('\\');
	_putchar('\n');
}
