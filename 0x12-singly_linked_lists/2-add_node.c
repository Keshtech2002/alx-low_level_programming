#include "lists.h"

/**
 * add_node - adds a new node at beginning of a linked list
 * @head: pointer to pointer to list_t
 * @str: new string value
 * Return: the address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int length = 0;

	while (str[length])
		length++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
