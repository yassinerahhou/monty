#include "main.h"

/**
  * free_stack - dgthjy
  * @head: Dfhfhtujt the stack
  * Return: zeroo
  */

void free_stack(stack_t **head)
{
	stack_t *uri = NULL;

	if (!head)
		return;

	uri = *head;
	while (uri)
	{
		*head = (*head)->next;
		free(uri);
		uri = *head;
	}
}
