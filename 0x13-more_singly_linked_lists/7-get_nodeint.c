#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head
 * @index: index of the node, starting at 0
 * Return: node at nth or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *n;

	for (n = head, a = 0 ; n && a < index ; n = n->next, a++)
		;
	return (n);
}
