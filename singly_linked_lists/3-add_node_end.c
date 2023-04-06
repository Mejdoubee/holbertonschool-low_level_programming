#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: double pointer
* @str: string to be added
* Return: the address of the new element, or NULL if it failed
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	size_t len;

	len = strlen(str);

	new = malloc(sizeof(list_t));
	if (str == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
