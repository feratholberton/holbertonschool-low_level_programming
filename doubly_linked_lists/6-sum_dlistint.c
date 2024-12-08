#include "lists.h"

/**
 * sum_dlistint - sums data
 * @head: pointer
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
