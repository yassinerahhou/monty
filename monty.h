#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>


#define VALID_PUSH		0
#define ERROR_PUSH		500
#define ERROR_MALLOC		501
#define ERROR_INVALID_INSTRC	502
#define ERROR_PINT		503
#define ERROR_POP		504

#define ERROR_ADD		506
#define ERROR_SUB		507
#define ERROR_DIV		508
#define ERROR_MUL		509
#define ERROR_MOD		510
#define ERROR_DIV_BY_ZERO	511
 

void push(stack_t **stack, unsigned int nbr);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
int is_valid_data(char *data);
void error_h1(stack_t **head, int errno,
		unsigned int line_num, char *line, char *op_code);

#endif
