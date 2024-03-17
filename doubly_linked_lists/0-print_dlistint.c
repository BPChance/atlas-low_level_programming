#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count;

	if (!h)
		return (0);

	while (current)
	{
		printf("%d\n", current->n);

		current = current->next;
		count++;
	}
	return (count);
}
