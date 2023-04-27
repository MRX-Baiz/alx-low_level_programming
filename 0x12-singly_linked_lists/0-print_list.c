#include "lists.h"
/**
 * print_list - prints all the elements of list
 * @h: list's name
 * Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		j++;
		h = h->next;
	}
	return (j);
}
