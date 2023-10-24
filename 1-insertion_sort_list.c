#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order
 * @list: Pointer to a pointer to the head of the doubly linkedlist
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *crnt;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	crnt = (*list)->next;

	while (crnt != NULL)
	{
		listint_t *insrt = crnt;

		while (insrt->prev != NULL && insrt->n < insrt->prev->n)
		{
			listint_t *prev = insrt->prev;
			listint_t *next = insrt->next;

			if (prev->prev)
				prev->prev->next = insrt;
			else
				*list = insrt;
			insrt->prev = prev->prev;
			insrt->next = prev;
			prev->prev = insrt;
			prev->next = next;

			if (next != NULL)
				next->prev = prev;
			print_list(*list);
		}
		crnt = crnt->next;
	}
}
