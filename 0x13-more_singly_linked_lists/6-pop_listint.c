#include "lists.h"

/**
 * pop_listint - Deleting the head node of a linked list
 * @head: Address of the head of the list
 *
 * Return: Data of the head deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *pointa;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = pointa->n;
	*head = pointa->next;
	free(pointa);
	return (n);
}
