#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head
 * @index: index of the node
 * Return: nth node of list or NULL if !node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
