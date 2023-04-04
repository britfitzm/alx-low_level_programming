#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes head node from linked list
 * @head: head of linked list
 * @n: integer
 * Return: 0 if empty linked list
 */

int pop_listint(listint_t **head)

{
	listint_t *new_node = malloc(sizeof(listint_t));
	int n;

	if (head == NULL)
	{
		return (0);
	}

	*new_node = (*head)->next;
	n = (*head)->n;

	free(*head);

	*head = new_node;

	return n;
}
