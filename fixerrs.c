#include "main.h"


/**
 * fix_err01 - handbf fhff dgfrhrh
 * @nrdheaad: Double pfhfh hrhhrhj rhrhf rfhrh
 * @errno: error number to pfjhf tjrerrhjt gjtr ttrtte 
 * @line_num: the line numberyr rhre guyyug tyutu
 * @line: the line where tryre jtgjtrj jrjry eyrytyuj
 * @str_mcode: operfhfh hrshfrfhf hfhfh fhreh
 * Return: return to zero
 */

void fix_err01(stack_t **nrdheaad, int errno,
		unsigned int line_num, char *line, char *str_mcode)
{
	if (errno == ERROR_PUSH)
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
	else if (errno == ERROR_MALLOC)
		fprintf(stderr, "Error: malloc failed\n");
	else if (errno == ERROR_INVALID_INSTRC)
		fprintf(stderr, "L%u: unknown instruction %s\n", line_num, str_mcode);
	else if (errno == ERROR_PINT)
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	else if (errno == ERROR_POP)
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
	else if (errno == ERROR_ADD)
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
	else if (errno == ERROR_DIV)
		fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
	else if (errno == ERROR_DIV_BY_ZERO)
		fprintf(stderr, "L%u: division by zero\n", line_num);
	else if (errno == ERROR_PCHAR)
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
	else if (errno == ERROR_ASCII)
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);

	free_stack(nrdheaad);
	if (line)
		free(line);
	exit(EXIT_FAILURE);
