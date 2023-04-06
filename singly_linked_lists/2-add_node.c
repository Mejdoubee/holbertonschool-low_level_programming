#include "lists.h"
#include "string.h"
#include <stdlib.h>

/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: double pointer
* @str: the string to be added
* Return: the address of the new element, or NULL if it failed
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	len = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
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
	new->next = *head;
	*head = new;
	return (new);

}
