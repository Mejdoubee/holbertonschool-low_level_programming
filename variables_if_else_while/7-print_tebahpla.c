#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
	char n;

	for (n = 'z'; !(n <= '`'); n--)
		putchar(n);
	putchar('\n');
	return (0);
}
