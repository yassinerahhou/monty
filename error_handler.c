#include "monty.h"


/**
 * error_handler - handlefht hthth rrhrhr
 * @head: Double pointedgd g(rgfgrg)
 * @errno: error number to print trgrgrgh
 * @line_num: the line numberththr rgrg rgrgr
 * @line: the line where grgr g()
 * @op_code: operation code string
 * Return: Nothing
 */

void error_handler(stack_t **head, int errno,
		unsigned int line_num, char *line, char *op_code)
{
	if (errno == ERROR_PUSH)
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
	else if (errno == ERROR_MALLOC)
		fprintf(stderr, "Error: malloc failed\n");
	else if (errno == ERROR_INVALID_INSTRC)
		fprintf(stderr, "L%u: unknown instruction %s\n", line_num, op_code);
	else if (errno == ERROR_PINT)
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	else if (errno == ERROR_POP)
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
	else if (errno == ERROR_SWAP)
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
	else if (errno == ERROR_ADD)
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
	else if (errno == ERROR_SUB)
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
	else if (errno == ERROR_DIV)
		fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
	else if (errno == ERROR_DIV_BY_ZERO)
		fprintf(stderr, "L%u: division by zero\n", line_num);
	else if (errno == ERROR_MUL)
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
	else if (errno == ERROR_MOD)
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
	else if (errno == ERROR_PCHAR)
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
	else if (errno == ERROR_ASCII)
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);

	free_stack(head);
	if (line)
		free(line);
	exit(EXIT_FAILURE);
}
