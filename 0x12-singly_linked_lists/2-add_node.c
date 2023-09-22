#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - function that adds a new node at the beginning of a list
* @head: pointer of the head node
* @str: string to be duplicated and stored
* Return: address of the new element of null
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_element);
		return (NULL);
	}

	while (str[len])
		len++;

	new_element->str = duplicate;
	new_element->len = len;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
