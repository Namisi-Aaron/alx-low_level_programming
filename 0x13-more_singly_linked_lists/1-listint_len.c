#include "lists.h"
#include <stddef.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head pointer to the list
 *
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;
	listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	counter = 0;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
