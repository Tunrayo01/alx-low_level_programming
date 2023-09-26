#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: linked list
 * Return: the number  of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
