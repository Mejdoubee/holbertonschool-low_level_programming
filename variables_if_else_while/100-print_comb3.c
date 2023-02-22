#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
		for (b = 48; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if ((a != '9') || (b != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	return (0);
}
