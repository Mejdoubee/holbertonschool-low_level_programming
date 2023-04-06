#include "lists.h"

/**
* list_len_recursively - function that count the numbers of elements in list_t\
							recursively
* @h: pointer to the head of the list_t
* @count_node: current nodes count
* Return: count of nodes
*/
size_t list_len_recursively(const list_t *h, size_t count_node)
{
	if (h == NULL)
	{
		return (count_node);
	}
	else
		return (list_len_recursively(h->next, count_node + 1));
}
/**
* list_len - function to call list_len_recursively with\
					initial count_node = 0
* @h: pointer to the head of the list_t
* Return: number of elements in a linked list_t
*
*/
size_t list_len(const list_t *h)
{
	return (list_len_recursively(h, 0));
}
