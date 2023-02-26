#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, l, k;

	for (i = 0; i <= 7; i++)
	{
		for (l = i + 1; l <= 8; l++)
		{
			for (k = l + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(l + '0');
				putchar(k + '0');
				if (i != 7 || l != 8 || k != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
