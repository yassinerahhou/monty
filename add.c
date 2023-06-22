
/**
 * add - addgghtof the stack
 *
 * @stack: Doubletyhthyhe stack
 * @line_number: Lithyhyhymmand in the source file
 *
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second;
	int sum = 0;

	if (!(*stack) || !(*stack)->next)
		error_handler(stack, ERROR_ADD, line_number, NULL, NULL);
	top = *stack;
	second = (*stack)->next;
	sum = top->n + second->n;
	second->n = sum;

	top->next = second->next;
	free(top);
	*stack = second;
}
