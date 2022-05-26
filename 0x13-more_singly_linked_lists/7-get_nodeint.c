#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @index: index of node to be returned
 * @head: pointer to head
 * Return: address of nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *n_node = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		n_node = n_node->next;
		if (n_node == NULL)
			return (NULL);
	}
	return (n_node);
}
