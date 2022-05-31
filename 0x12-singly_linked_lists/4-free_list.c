#include "lists.h"

/**
 * free_list - frees alist
 * @head: head of the linked list
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *onit;

	while ((onit = head) != NULL)
	{
		head = head->next;
		free(onit->str);
		free(onit);
	}
}
