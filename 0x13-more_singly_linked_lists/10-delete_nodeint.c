#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer to head
 * @index: index of node to be deleted
 * Return: 1 on success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *n_node  = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	n_node = temp->next;
	temp->next = n_node->next;
	free(n_node);
	return (1);
}
