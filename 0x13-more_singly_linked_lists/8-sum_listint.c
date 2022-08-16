#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data in a linked list
 * @head: linked list
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
