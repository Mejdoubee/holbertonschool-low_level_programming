#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - function that print all the element of a dlistint_t list
* @h: pointer to the head
* Return: count of nodes
*
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
