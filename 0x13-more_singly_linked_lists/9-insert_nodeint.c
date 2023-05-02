#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index of the list where the new node should be added
 * @n: elements
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *i = malloc(sizeof(listint_t)), *h;

	if (head == NULL || !i)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (!idx)
	{
		i->next = *head;
		*head = i;
		return (i);
	}
	h = *head;
	while (h)
	{
		if (j == idx - 1)
		{
			i->next = h->next;
			h->next = i;
			return (i);
		}
		j++;
		h = h->next;
	}
	free(i);
	return (NULL);
}
