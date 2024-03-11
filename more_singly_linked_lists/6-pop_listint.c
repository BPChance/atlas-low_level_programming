#include "lists.h"
/**
 * pop_listint - deletes node and returns its data
 * @head: head
 * Return: data`
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
