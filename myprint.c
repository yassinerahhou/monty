#include "monty.h"

/**
 * pint - prints the value 
 * @stack: Double pointer to the stack
 * @line_number: number of the commah j
 *
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
if (stack == NULL || *stack == NULL)
{
	error_handler(stack, ERROR_PINT, line_number, NULL, NULL);
}
printf("%d\n", (*stack)->n);
}
