#ifndef _LIST_
#define _LIST_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *struct list_s - singly linked list
 *@next: pointer
 *Description: singly linked list task in ALx.
 *@str: string
 *@len: length of string.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}	list_t;

size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);


#endif
