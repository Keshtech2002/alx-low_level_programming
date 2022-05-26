#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: double pointer to head node
 * Return: head's node data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;
	*head = temp->next;
	free(temp);

	return (node_data);
}
