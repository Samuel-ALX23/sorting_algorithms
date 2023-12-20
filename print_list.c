#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a singly linked list of integers.
 *
 * @head: The head of the list to be printed.
 */
void print_list(const listint_t *head)
{
	int i;

	i = 0;
	while (head)
	{
		if (i > 0)
			printf(", ");
		printf("%d", head->n);
		++i;
		head = head->next;
	}
	printf("\n");
}
