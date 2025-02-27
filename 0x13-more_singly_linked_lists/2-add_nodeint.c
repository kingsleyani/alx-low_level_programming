#include "lists.h"

/**
 * add_nodeint - Add a node in the head
 * @n: Integer value
 * @head: Memory of the Head
 * Return: Head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}

	return (*head);

}
