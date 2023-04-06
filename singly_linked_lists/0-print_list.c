#include "stdio.h"
#include "lists.h"



/**
* print_list_recursively - function that prints all the elements\
							of a list_t recursively
* @h: pointer to the head of the list_t
* @node_count: node count
* Return: count of nodes
*/
size_t print_list_recursively(const list_t *h, size_t node_count)
{
	if (h == NULL)
		return (node_count);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	return (print_list_recursively(h->next, node_count + 1));
}


/**
* print_list - function to call print_list_recursive with\
							initial node_count = 0
* @h: pointer to the head of the list_t
* Return: count of nodes
*
*/
size_t print_list(const list_t *h)
{
	return (print_list_recursively(h, 0));
}
