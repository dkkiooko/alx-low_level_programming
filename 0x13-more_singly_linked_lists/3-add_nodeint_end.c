#include "lists.h"
/**
 * add_nodeint_end - add a node to end of linked list
 * @head: node to be added
 * @n: value of node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *cursor;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = temp;
	}
	else
		*head = temp;

	return (temp);
}
