#include "main.h"
#include <stdio.h>

/**
* print_array - print number of elem of array
* @a: array
* @n: int
* Return: nb of element
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
