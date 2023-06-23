#include "main.h"

/**
 * pall - prints all the values on the stack,starting from the up of the stack
 *
 * @stack: Double pointer to the stack
 * @ly_numbrs_rr: Line number of the command in the source file
 *
 * Return: Nothing
 */

void my_pall(stack_t **stack, unsigned int ly_numbrs_rr)
{
	stack_t *uri = NULL;
	(void) ly_numbrs_rr;

	if (!(*stack))
		return;

	uri = *stack;
	while (uri)
	{
		printf("%d\n", uri->n);
		uri = uri->next;
	}
}
