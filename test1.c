#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node, *cmp_node, *last_ord_node=NULL;

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
			/* prev node or head */
			if (cmp_node->prev != NULL)
			{
				cmp_node->prev->next = curr_node;
				printf("asdf\n");
			}
			else
			{
				list = &curr_node;
				printf("swap list\n");
			}

			curr_node->prev = cmp_node->prev;

			/* next node or NULL */
			cmp_node->next = curr_node->next;
			if (curr_node->next != NULL)
				curr_node->next->prev = cmp_node;

			/* swap nodes */
			curr_node->next = cmp_node;
			cmp_node->prev = curr_node;
		
			if (curr_node->prev == NULL)
				list = &curr_node;
	
			print_list(*list);

			if (curr_node->prev == NULL)
				break;
			else
				cmp_node = curr_node->prev;
				/* keep swapping */
		}

		curr_node = last_ord_node;
	}
}
