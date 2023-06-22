#include "monty.h"

/**
 * pall - prints all tkhjkj kjlkjr ijhujr rojrok
 * @stack: Double poinnkljkfj ojojrj joujojuor ojouor
 * @line_number: Line numhihio hyiui juiuiuor uosrg
 * Return: always zero
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *mycurr = NULL;
	(void) line_number;

	if (!(*stack))
		return;

	curr = *stack;
	while (mycurr)
	{
		printf("%d\n", mycurr->n);
		mycurr = mycurr->next;
	}
}
