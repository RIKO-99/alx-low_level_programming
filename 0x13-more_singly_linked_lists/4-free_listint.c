#include "lists.h"

/**
 * free_listint - function frees linked list
 *
 * @head: pointer to head node
 *
 * Return: 0 Always Success
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
