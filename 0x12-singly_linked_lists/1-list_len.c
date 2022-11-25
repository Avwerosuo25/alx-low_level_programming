#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the linked list to check
 * Return: number of elements in @h
 */

size_t list_len(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
