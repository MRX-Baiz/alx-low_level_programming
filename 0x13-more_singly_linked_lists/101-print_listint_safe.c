#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers to the nodes
 * @list: the old list
 * @size: size of the new list
 * @new: new node
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **l;
	size_t i;

	l = malloc(size * sizeof(listint_t *));
	if (l == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		l[i] = list [i];
	l[i] = new;
	free(list);
	return (l);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd = 0, i;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0 ; i < nd ; i++)
		{
			if (head == list[i])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return (nd);
			}
		}
		nd++;
		list = _r(list, nd, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nd);
}
