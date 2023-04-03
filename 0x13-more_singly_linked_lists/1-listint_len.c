#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns number of elements in
 * linked list
 * @h: pointer to listint_t list
 * Return: number of elements in h
 */

size_t listint_len(const listint_t *h)

{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
