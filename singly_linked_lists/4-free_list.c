#include "lists.h"
#include <stdlib.h>

/**
* free_list_recursively - free list_t recursively
* @head: pointer to head of the list
*
*/
void free_list_recursively(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list_recursively(head->next);
	free(head->str);
	free(head);
}

/**
* free_list - function that call free_list_recursively
* @head: pointer to head of the list
*
*/
void free_list(list_t *head)
{
	free_list_recursively(head);
}
