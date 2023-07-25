#include "sort.h"

/**
 * swap - function to Swap two nodes.
 * @h: A pointer to the head.
 * @n: A pointer to the first.
 * @m: The second node to swap.
 */
void swap(listint_t **h, listint_t **n, listint_t *m)
{
	(*n)->next = m->next;
	if (m->next != NULL)
		m->next->prev = *n;
	m->prev = (*n)->prev;
	m->next = *n;
	if ((*n)->prev != NULL)
		(*n)->prev->next = m;
	else
		*h = m;
	(*n)->prev = m;
	*n = m->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *r, *p;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = p)
	{
		p = i->next;
		r = i->prev;
		while (r != NULL && i->n < r->n)
		{
			swap(list, &r, i);
			print_list((const listint_t *)*list);
		}
	}
}
