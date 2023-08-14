#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascenfing order
 * @list: pointer to a pointer to the head of the list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		prev = current->prev;

		while (prev != NULL && prev->n > temp->n)
		{
			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;

			if (temp->prev != NULL)
				temp->prev->next = temp;

			prev->prev = temp;
			temp->next = prev;

			prev = temp->prev;

			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
