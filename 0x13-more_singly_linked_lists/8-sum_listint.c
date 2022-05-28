#include "lists.h"

#define START 0

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = START;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
