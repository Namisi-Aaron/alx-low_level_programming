#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: points to a pointer to the start of the list
 * @str: new string to be added at the beginning
 *
 * Return: NULL if it fails, address of new element on success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
