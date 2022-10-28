#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node
 * of a linked list
 *
 * @head: head node
 * @index: integer data index of the node
 *
 * @Return: Random node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
