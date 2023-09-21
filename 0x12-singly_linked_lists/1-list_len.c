#include "lists.h"

/**
 * list_len - that returns the number of elements in a linked list
 * @h: the list
 * Return: the lenght of nodes
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
	h = h->next;
	elements++;
	}
	return (elements);
}
