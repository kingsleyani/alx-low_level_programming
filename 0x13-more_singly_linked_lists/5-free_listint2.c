#include "lists.h"

/**
 * free_listint2 - Free the list and put NULL in the head
 * @head: a pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *pointa;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		pointa = *head;
		*head = pointa->next;
		free(pointa);
	}
	*head = NULL;

