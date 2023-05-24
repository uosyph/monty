#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>

extern char *flag;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t *add_node(stack_t **head, const int n);
void free_stack(stack_t *head);
stack_t *pop_s(stack_t **head);
stack_t *dequeue(stack_t *head);
void pall(stack_t **h, int l);
void pstr(stack_t **h, int l);
void pchar(stack_t **h, int l);
void pint(stack_t **h, int l);
void pop(stack_t **h, int l);
void push(stack_t **h, int n);
void swap(stack_t **h, int l);
void rotl(stack_t **h, int l);
void rotr(stack_t **h, int l);

#endif
