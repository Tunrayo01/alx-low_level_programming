#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @index: index of node
 * @head: first node pointer
 * Return: node pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int x;

	x = 0;
	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}
