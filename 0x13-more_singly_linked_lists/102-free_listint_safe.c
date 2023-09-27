#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: first node pointer
 * Return: list to be freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *temp2;
	unsigned int num = 0;

	if (temp == 0 || h == 0)
		return (0);
	temp = *h;
	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;
		num++;

		free(temp2);

		if (temp2 <= temp)
			break;
	}
	*h = 0;
	return (num);
}
