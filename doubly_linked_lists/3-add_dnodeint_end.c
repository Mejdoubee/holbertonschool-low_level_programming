#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node at the end of\
*						a dlistint_t list.
* @head: pointer to the head of the list
* @n: integer data
* Return: the address of the new element, or NULL if it failed
*
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
