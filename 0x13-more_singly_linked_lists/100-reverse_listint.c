#include "lists.h"

/**
 * reverse_listint - function reverse a listint_t
 *
 * @head: pointer to the head node
 *
 * Return: address of the first node in
 * a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
