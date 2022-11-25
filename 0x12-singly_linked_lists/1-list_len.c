#include "lists.h"

/**
 * list_len - Finds the number of elements.
 * @h: The lined list_t value.
 *
 * Return: Always 0 (Success)
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
