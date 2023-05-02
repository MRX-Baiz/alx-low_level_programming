#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: head
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nb = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		nb++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
			break;
		}
	}
	return (nb);
}
