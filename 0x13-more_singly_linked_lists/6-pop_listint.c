#include "lists.h"

/**
 * pop_listint - function deletes the head node in a list
 *
 * @head: pointer to the head node
 *
 * Return: 0 Always Success
 */
int pop_listint(listint_t **head)
{
	int node1;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	node1 = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (node1);
}
