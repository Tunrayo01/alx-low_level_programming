#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
* free_list - function that frees a list_t list
* @head: pointer to the head
*/

void free_list(list_t *head)
{
	list_t *present;

	while (head != NULL)
	{
	present = head;
	head = head->next;
	free(present->str);
	free(present);
	}
}
