#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @n: data for new node
 * @head: first node pointer
 * Return: new node pointer, or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
