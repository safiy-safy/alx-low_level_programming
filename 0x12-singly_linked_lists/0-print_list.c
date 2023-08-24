#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
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
	}
=======
                h = h->next;
	        
       }
>>>>>>> f1be779ef2df835bc7278bf03b6c0ca4f6370ac6

	return (nodes);
}
