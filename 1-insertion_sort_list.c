#include "sort.h"

/**
 * insertion_sort_list - Insertion sort applied on a Doubly Linked List.
 * @list: Head node of the linked list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = *list->next;
	listint_t *bkup = NULL;
	listint_t *swap = NULL;

	while (node != NULL)
	{
		if (node->n < node->prev->n)
		{
			bkup = node;
			swap = bkup->prev;
			node = node->next;
			while (swap != NULL && bkup->n < swap->value)
			{
				swap->prev->next = bkup;
				bkup->prev = swap->prev;
				swap->next = bkup->next;
				swap->prev = bkup;
				bkup->next->prev = swap;
				bkup->next = swap;
				swap = bkup->prev;
				if (*list->prev != NULL)
					*list = *list->prev;
				print_list(*list);
			}
		}
		else
			node = node->next;
	}
}
