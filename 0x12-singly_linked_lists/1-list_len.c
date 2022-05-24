#include "lists.h"

/**
 * list_len - returns number of nodes
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
