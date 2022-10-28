#include "lists.h"

/**
 * print_listint - functions prints all the elements of a list.
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}
