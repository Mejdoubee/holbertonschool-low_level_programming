#include "lists.h"

/**
* lenght - function that return the lenght of dlistint_t list
* @head: pointer to the head of the list
* Return: lenght of list
*
*/
unsigned int lenght(dlistint_t *head)
{
	unsigned int len = 0;

	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}
/**
* find_index - function that find the node at i index
* @head: pointer to the head of the list
* @idx: index of the node
* Return: pointer to the node of "i" index specified
*
*/

dlistint_t *find_index(dlistint_t *head, unsigned int idx)
{
	unsigned int i = 0;

	for (; head && i < idx; i++)
	{
		head = head->next;
	}
	return (head);
}

/**
* create_link_node - function that create and link node
* @n : int data
* @prev: pointer to the previous node
* @next: pointer to the next node
* Return: pointer to the new node
*/

dlistint_t *create_link_node(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = prev;
	new->next = next;

	if (prev)
	{
		prev->next = new;
	}
	if (next)
	{
		next->prev = new;
	}
	return (new);
}

/**
* insert_dnodeint_at_index - function that inserts a new node\
*							at a given position.
* @h: double pointer to the head of the list
* @idx: index of the list where the new node should be added
* @n: integer data
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == lenght(*h))
	{
		return (add_dnodeint_end(h, n));
	}
	ptr = find_index(*h, idx);
	if (!ptr)
	{
		return (NULL);
	}
	new = create_link_node(n, ptr->prev, ptr);
	if (!new)
	{
		return (NULL);
	}
	return (new);
}
