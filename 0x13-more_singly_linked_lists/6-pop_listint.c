#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first element in linked list
 * Return: data inside elements that was deleted,
 * or 0 if list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int s;

	if (!head || *head)
		return (0);

	s = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (s);
}
