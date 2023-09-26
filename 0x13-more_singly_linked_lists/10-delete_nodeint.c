#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @index: node index to be deleted
 * @head: first node pointer
 * Return: -1 if fsil and 1 if success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *temp = *head;
	unsigned int x = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = temp->next;
	temp->next = prev->next;
	free(prev);
	return (1);
}
