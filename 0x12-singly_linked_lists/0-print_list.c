#include "list.h"
/**
 * print_list - print element of list
 * return: number of element
 * @h:the singly linked list.
 */
size_t print_list(const list_t *h)
{
	size_t akin;

	akin = 0;
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[%d] %s\n", 0 "nil)";
		else
			printf("[%d] %s\n", 0 "nil)";

