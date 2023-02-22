#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 97; b <= 102; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
