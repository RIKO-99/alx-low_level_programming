#include "lists.h"

/**
 * listint_len - function prints number er of elements
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		h = h->next;
		nod++;
	}
	return (nod);
}
