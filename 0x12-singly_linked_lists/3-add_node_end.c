#include "lists.h"

/**
 * add_node_end - adds new node at beginning of a linked list
 * @head: pointer to pointer to list_t list
 * @str: string for new node
 * Return: address of new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *newnode;
	unsigned int length = 0;

	while (str[length])
		length++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = newnode;
	return (newnode);
}
