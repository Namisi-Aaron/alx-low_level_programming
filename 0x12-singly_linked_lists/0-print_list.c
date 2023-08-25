#include "main.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i;
	list_t *ptr;

	if (h == NULL)
		return;
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", ptr->len);
			printf("%s\n", ptr->str);
		}
		i++;
		ptr = ptr->next;
	}
	return (i);
}
