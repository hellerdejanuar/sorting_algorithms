#include "sort.h"

/**
 * insertion_sort_list - insertion algorithm
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node, *cmp_node, *last_ord_node = NULL;

	if (!list || *list == NULL)
		return;

	curr_node = (*list)->next;
	last_ord_node = curr_node;

	while (curr_node != NULL)
	{
		cmp_node = curr_node->prev;
		last_ord_node = last_ord_node->next;

		while (curr_node->n < cmp_node->n)
		{
			if (cmp_node->prev != NULL)
				cmp_node->prev->next = curr_node;
			else
				(*list) = curr_node;

			curr_node->prev = cmp_node->prev;
			cmp_node->next = curr_node->next;
			if (curr_node->next != NULL)
				curr_node->next->prev = cmp_node;
			curr_node->next = cmp_node;
			cmp_node->prev = curr_node;

			print_list(*list);

			if (curr_node->prev == NULL)
				break;
			cmp_node = curr_node->prev;
		}

		curr_node = last_ord_node;
	}
}
