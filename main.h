#ifndef main_H
#define main_H

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
#define ERROR_SWAP		505
#define ERROR_ADD		506
#define ERROR_SUB		507
#define ERROR_DIV		508
#define ERROR_MUL		509
#define ERROR_MOD		510
#define ERROR_DIV_BY_ZERO	511
#define ERROR_ASCII		512
#define ERROR_PCHAR		513 

/**
 * struct stack_s - doubly bfnffbfb efefe(or queue)
 * @n: integer
 * @prev: points to thfghf of the stack (or queue)
 * @next: points to the 
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoderyryyh and yry rits function
 * @opcode: the opcode fhhrh rhr
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int ly_numbrs_rr);
} instruction_t;


extern stack_t *nrdheaad;


void my_push(stack_t **stack, unsigned int nbr);
void my_pall(stack_t **stack, unsigned int ly_numbrs_rr);
void my_ppint(stack_t **stack, unsigned int ly_numbrs_rr);
void fct_pop(stack_t **stack, unsigned int ly_numbrs_rr);


void fct_add(stack_t **stack, unsigned int ly_numbrs_rr);
void fct_nop(stack_t **stack, unsigned int ly_numbrs_rr);


void fct__div(stack_t **stack, unsigned int ly_numbrs_rr);


void fct__pchar(stack_t **stack, unsigned int ly_numbrs_rr);

int is_valid_data(char *data);

int exe_ly(stack_t **nrdheaad, char *str_mcode,
		char *data, unsigned int ly_numbrs_rr);
void fix_args(int argc);
FILE *open_f(char *smyto);
void free_stack(stack_t **nrdheaad);
void fix_err01(stack_t **nrdheaad, int errno,
		unsigned int line_num, char *line, char *str_mcode);
void (*datastrc(char *s))(stack_t **, unsigned int);


#endif
