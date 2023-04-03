#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds new node at beginning of list
 * @head: original linked list
 * @n: integer to add to node
 * Return: address of new list or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
