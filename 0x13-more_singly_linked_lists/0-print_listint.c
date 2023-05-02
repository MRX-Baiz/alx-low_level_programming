#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", h->n);
	return (nodes);
}
