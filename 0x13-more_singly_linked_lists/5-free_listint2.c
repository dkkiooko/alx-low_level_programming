#include "lists.h"
/**
 * free_listint2 - frees a linked lists and sets head to NULL
 * @head: llinked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		traverse = (*head)->next;
		free(*head);
		*head = traverse;
	}
	*head = NULL;
}
