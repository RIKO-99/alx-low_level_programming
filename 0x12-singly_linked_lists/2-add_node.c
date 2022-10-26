#include "lists.h"

/**
 * add_node - function adds a new node at the beginning
 * @head: pointer to the head node
 * @str: string to store list
 *
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
