#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data (n) of a dlistint_t\
*										linked list.
*
* @head: pointer to the head of the list
* Return: the sum of all the data (n) of a dlistint_t linked list
*
*/

int  sum_dlistint(dlistint_t *head)
{
	unsigned int count_sum = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		{
			count_sum += ptr->n;
		}
		ptr = ptr->next;
	}
	return (count_sum);
}