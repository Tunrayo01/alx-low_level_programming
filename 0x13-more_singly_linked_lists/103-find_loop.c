#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: first node pointer
 * Return: loops found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	if (!head)
		return (NULL);
	node1 = node2 = head;

	while (node2 && node1 && node1->next)
	{
		node2 = node2->next;
		node1 = (node1->next)->next;

		if (node1 == node2)
		{
			node2 = head;

			while (node2 && node1)
			{
				if (node2 == node1)
					return (node2);

				node2 = node2->next;
				node1 = node1->next;
			}
		}
	}
	return (NULL);
}
