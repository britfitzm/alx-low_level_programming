#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list
 * @head: head of linked list
 * Return: no return
 */

void free_listint(listint_t *head)

{
	listint_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		head->next = NULL;
		free(current_node);
	}
}
