#include "lists.h"

/**
 * reverse_listint -  function that reverses a list
 * @head: first node pointer
 * Return: new node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}
