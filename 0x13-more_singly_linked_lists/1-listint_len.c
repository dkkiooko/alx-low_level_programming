#include "lists.h"
/**
 * listint_len - finds number of elements in linked list
 * @h: linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h->next == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
