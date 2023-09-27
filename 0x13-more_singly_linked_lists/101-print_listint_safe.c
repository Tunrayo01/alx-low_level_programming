#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head:first node pointer
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2;
	unsigned int num = 0;

	temp = head;
	if (temp == 0)
		return (0);

	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;

		num++;

		printf("[%p] %d\n", (void *)temp2, temp2->n);

		if (temp2 <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}

	return (num);
}
