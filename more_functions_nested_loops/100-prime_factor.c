#include <stdio.h>

/**
* main - prime factors
*
* Return: Aalways 0
*/

int main(void)
{
	long int fact = 612852475143;
	long int i;

	for (i = 2; i <= fact; i++)
	{
		if (fact % i == 0)
		{
			while (fact % i == 0)
				fact /= i;
		}
	}
	printf("%lu\n", i - 1);
	return (0);
}
