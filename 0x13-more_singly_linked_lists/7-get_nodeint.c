#include "lists.h"
/**
 * get_nodeint_at_index - get nth node of a linked list
 * @head: linked list
 * @index: index of node to be returned
 * Return: node or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
