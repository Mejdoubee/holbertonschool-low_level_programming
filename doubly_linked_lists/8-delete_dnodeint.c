#include "lists.h"

/**
* delete_dnodeint_at_index - function that deletes the node at index\
*								index of a dlistint_t linked list
* @head: double pointer to the head of the list
* @index: index of node to delete
* Return: 1 if it succeeded, -1 if it failed
*
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	if (!*head || !head)
	{
		return (-1);
	}

	node = *head;

	while (node && count < index)
	{
		node = node->next;
		count++;
	}
	if (node->prev)
	{
		node->prev->next = node->next;
	}
	else
	{
		*head = node->next;
	}
	if (node->next)
	{
		node->next->prev = node->prev;
	}
	else
	{
		if (node->prev)
		{
			node->prev->next = NULL;
		}
	}
	free(node);
	return (1);
}
