#include "lists.h"

/**
 * free_list - function frees a list
 * @head: pointer to the head node
 *
 * Return: free mem
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
