#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * *idx: index for new node
 * @head: first node pointer
 * @n: new node data
 * Return: new node pointer or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
