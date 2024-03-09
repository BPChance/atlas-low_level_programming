#include "lists.h"
/**
 * add_node_end - add new node to end
 * @head: head
 * @str: str to be stored
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	int count = 0;
	const char *ptr = str;

	if (str == NULL)
		return (NULL);
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->next = NULL;
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	end_node->len = count;
	if (*head == NULL)
		*head = end_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end_node;
	}
	return (end_node);
}
