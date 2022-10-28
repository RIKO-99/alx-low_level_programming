#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 *
 * @head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *this;

	if (head != NULL)
	{
		this = *head;
		while ((temp = this) != NULL)
		{
			this = this->next;
			free(temp);
		}
		*head = NULL;
	}
}
