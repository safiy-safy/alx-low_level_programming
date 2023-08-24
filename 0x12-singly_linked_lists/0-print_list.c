#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
=======
 * print_list - Prints all the elements of a linked list_t list,
 * @h: The list_t list,
 *
 * Return: The number of nodes printed in h.
>>>>>>> 8c7e4abbc7eec800628d74c71c7da015f8dab944
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
<<<<<<< HEAD
		h = h->next;
=======
	        h = h->next;
>>>>>>> 8c7e4abbc7eec800628d74c71c7da015f8dab944
	}

	return (nodes);
}
