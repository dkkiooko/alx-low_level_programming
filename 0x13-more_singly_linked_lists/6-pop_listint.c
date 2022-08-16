#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: linked lists
 * Return: node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}
