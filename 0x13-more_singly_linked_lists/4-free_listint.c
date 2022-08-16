#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head);
		head = cursor;
	}
}
