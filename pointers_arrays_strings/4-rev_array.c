#include "main.h"

/**
* reverse_array - functions to reverse array
* @a: array of int
* @n: n
* Return: compared value
*/
void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		i++;
		n--;
		}
}

