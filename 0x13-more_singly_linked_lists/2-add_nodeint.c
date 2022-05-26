#include "lists.h"

/**
 * add_nodeint - adds a node to the begiinning of a linked list
 * @head: double pointer to head node
 * @n: data integer
 * Return: address to new node which is the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
