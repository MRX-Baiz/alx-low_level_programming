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

	if (head == NULL || head->next == NULL)
		return (NULL);
	p = head->next;
	e = (head->next)->next;
	while (e)
	{
		if (p == e)
		{
			p = head;
			while (p != e)
			{
				p = p->next;
				e = p->next;
			}
			return (p);
		}
		p = p->next;
		e = (e->next)->next;
	}
	return (NULL);
}
