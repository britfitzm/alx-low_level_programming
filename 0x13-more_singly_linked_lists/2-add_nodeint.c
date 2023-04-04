#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds new node at beginning of list
 * @head: pointer to first node in list
 * @n: integer to add to node
 * Return: pointer to new node, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
