#include "lists.h"
/**
 * print_listint - Prints the elements of the list.
 * @head: Head.
 * Return: node count.
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h !=  NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	x++;


	}
	return (x);
}
