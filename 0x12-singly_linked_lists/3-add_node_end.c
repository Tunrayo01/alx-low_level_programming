#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list
* @head: pointer to the head of the list
* @str: new node string
* Return: address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element = malloc(sizeof(list_t));
	list_t *prev;

	if (new_element == NULL)
		return (NULL);

	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}

	new_element->len = strlen(str);
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	prev = *head;
	while (prev->next != NULL)
	prev = prev->next;

	prev->next = new_element;
	return (new_element);
}
