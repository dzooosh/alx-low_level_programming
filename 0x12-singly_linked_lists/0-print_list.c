#include "lists.h"
/**
 * print_list - prints all the elements of list_t
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t elements;
	const list_t *temp;

	elements = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] (%s)\n", temp->len, temp->str);
		temp = temp->next;
		elements++;
	}
	return (elements);
}
