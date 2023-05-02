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

	p = e = head;
	while (p && e && e->next)
	{	       
		p = p->next;
		e = e->next->next;
		if (p == e)
		{
			p = head;
			break;
		}
	}
	if (!p || !e || !e->next)
		return (NULL);
	while (p != e)
	}
		p = p->next;
		e = e->next;
	}
	return (e);
}
