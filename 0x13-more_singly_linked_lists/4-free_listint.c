#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: Head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *pointa;

	while (head != NULL)
	{
		pointa = head;
		head = head->next;
		free(pointa);
	}
}

