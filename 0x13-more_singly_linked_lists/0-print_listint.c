#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint - function that prints all the elements of a listint_t list
 *@h: linked list to print
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *num;
	int lenght = 0;

	num = h;
	if  (num == NULL)
		return ((size_t)(NULL));
	while (num != NULL)
	{
		printf("%d\n", num->n);
		num = num->next;
		lenght++;
	}
	return (lenght);
}
