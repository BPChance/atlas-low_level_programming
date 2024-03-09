#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head
 * @str: str in new node
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;
	const char *ptr = str;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (*ptr != '\0')
	{
		ptr++;
		count++;
	}
	new_node->len = count;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
