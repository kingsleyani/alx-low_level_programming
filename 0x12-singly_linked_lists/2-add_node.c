#include "lists.h"
/**
 * add_node - add new node at start of the list_t list.
 * @str : string for storing list
 * Return: head adress
 * @head :head of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *kings;
	size_t nchar;

	kings = malloc(sizeof(list_t));
	if (kings == NULL)
		return (NULL);

	kings->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	kings->len = nchar;
	kings->next = *head;
	*head = kings;

	return (*head);
}

