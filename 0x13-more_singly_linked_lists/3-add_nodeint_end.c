#include "lists.h"

/**
 * add_nodeint_end - Adding node to the end of list
 * @head: address of head of the list
 * @n: Integer value
 *
 * Return: Head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *t;

		t = *head;
		while (t->next != NULL)
			t = t->next;

		t->next = temp;
	}


	return (*head);

}
