#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: first node pointer
 * Return: loops found
 */

listint_t *find_listint_loop(listint_t *head)
{
	size_t length = 0;
	int cont;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		cont = *h - (*h)->next;
		if (cont > 0)
		{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		length++;
		break;
		}
	}
	*h = NULL;
	return (length);
}
