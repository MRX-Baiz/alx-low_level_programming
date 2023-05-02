#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head
 */
void free_listp(listp_t **head)
{
	listp_t *tmp, c;

	if (head != NULL)
	{
		c = *head;
		while ((tmp = c) != NULL)
		{
			c = c->next;
			free(tmp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *h, *new, *ad;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = h;
		h = new;
		ad = h;
		while (ad->next != NULL)
		{
			ad = ad->next;
			if (head == ad->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listp(&h);
	return (nodes);
}
