#include "lists.h"

/**
* get_dnodeint_at_index - function that returns the nth node of\
*							a dlistint_t linked list.
* @head: pointer to the head of the list
* @index: index of the node, starting from 0
* Return: nth of node , if the node does not exist,it return NULL
*
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = head;

	if (!ptr)
	{
		return (NULL);
	}
	for (; i < index; i++)
	{
		ptr = ptr->next;
		if (!ptr)
		{
			return (NULL);
		}
	}
	return (ptr);
}
