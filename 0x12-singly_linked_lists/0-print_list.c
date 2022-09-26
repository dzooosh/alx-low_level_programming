#include "lists.h"
/**
 * print_list - prints all the elements of list_t
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;
	const list_t *temp;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] (%s)\n", temp->len, temp->str);
		temp = temp->next;
		elements++;
	}
	return (elements);
}
