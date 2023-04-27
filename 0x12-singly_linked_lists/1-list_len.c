#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: list's name
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	int j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
