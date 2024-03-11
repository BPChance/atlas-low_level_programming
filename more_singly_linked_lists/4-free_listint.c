#include "lists.h"
/**
 * free_listint - frees list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
