#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all elements of linked list
 * @h: pointer to listint_t list to print
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)

{
	size_t s = 0;

	while (h)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
