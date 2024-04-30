#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Function that performs an insertion sort of a
 * doubly linked list.
 * @list: Head of doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;

	if (list == NULL || (*list)->next == NULL)
		return;
	temp = (*list)->next;
	while (temp)
	{
		while ((temp->prev) && (temp->prev->n > temp->n))
		{
			temp = swap_nodes(list, temp);
			print_list(*list);
		}
		temp = temp->next;
	}
}

/**
 * swap_nodes - Function that swaps a node with its previous node
 * in a doubly linked list.
 * @list: Head of doubly linked list.
 * @current_node: Pointer to the node to be swaped.
 * Return: Returns pointer to swaped node.
 */
listint_t *swap_nodes(listint_t **list, listint_t *current_node)
{
	listint_t *temp_prev = current_node->prev, *c_node = current_node;

	temp_prev->next = c_node->next;
	if (c_node->next)
		c_node->next->prev = temp_prev;
	c_node->next = temp_prev;
	c_node->prev = temp_prev->prev;
	temp_prev->prev = c_node;
	if (c_node->prev)
		c_node->prev->next = c_node;
	else
		*list = c_node;
	return (c_node);
}
