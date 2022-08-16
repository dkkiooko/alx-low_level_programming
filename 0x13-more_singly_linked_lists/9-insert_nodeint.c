#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list
 * @idx: index where to insert
 * @n: value of node
 * Return: address of new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *cursor;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	cursor = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	while (cursor != NULL)
	{
		if (count == idx - 1)
		{
			temp->next = cursor->next;
			cursor->next = temp;
		}
		count++;
		cursor = cursor->next;
	}
	if (idx > count)
		return (NULL);
	return (temp);
}
