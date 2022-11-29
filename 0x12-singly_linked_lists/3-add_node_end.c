#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the pointer of the first element/node
 * @str: points to the string in the node that is to be added
 *
 * Return: address of the new element.
 * NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = (list_t *)malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len  = len;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;

	return (ptr);
}
