#include "lists.h"

/**
 * pop_listint - unction that deletes the head node of a list
 * @head: first node pointer
 * Return: content of node to be deleted or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int number;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	temp = *head;

	return (number);
}
