#include "lists.h"
/**
 * list_len: lenght of elements
 * retun: number of element
 * @h: linked list;
 */
size_t list_len(const list_t *h)
{
	size_t akin;

	akin = 0;
	while (h != NULL)
	{
		h = h->next;
		akin++;
	}
	return (akin);
}
