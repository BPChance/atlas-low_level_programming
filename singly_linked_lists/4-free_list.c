#include "lists.h"
/**
 * free_list - frees list
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
