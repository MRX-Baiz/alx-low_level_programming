#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 * Return: address of the node where the loop starts
 * 		or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
		return (NULL);
	for (e = head->next ; e != NULL ; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head ; p!= e ; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}
