#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev, *h;

	prev = h = head;
	while (prev && h && h->next)
	{
		prev = prev->next;
		h = h->next->next;
		if (prev == h)
		{
			prev = head;
			break;
		}
	}
	if (!prev || !h || !h->next)
		return (NULL);
	while (prev != h)
	{
		prev = prev->next;
		h = h->next;
	}
	return (h);
}
