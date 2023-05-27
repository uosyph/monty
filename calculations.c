#include "monty.h"

/**
 * _add - adds the top 2 values of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 * opcode: add
 */
void _add(stack_t **h, unsigned int l)
{
	int n1, n2;

	n1 = get_argument(h, "add", l);
	n2 = get_argument(h, "add", l);

	add_node(h, n1 + n2);
}

/**
 * _sub - subtracts the top 2 values of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 * opcode: sub
 */
void _sub(stack_t **h, unsigned int l)
{
	int n1, n2;

	n1 = get_argument(h, "sub", l);
	n2 = get_argument(h, "sub", l);

	add_node(h, n2 - n1);
}

/**
 * _div - divides the top 2 values of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 * opcode: div
 */
void _div(stack_t **h, unsigned int l)
{
	int n1, n2;

	n1 = get_argument(h, "div", l);
	n2 = get_argument(h, "div", l);

	if (n1 == 0)
	{
		printf("L%d: division by zero\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	add_node(h, n2 / n1);
}

/**
 * _mul - multiply the top 2 values of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 * opcode: mul
 */
void _mul(stack_t **h, unsigned int l)
{
	int n1, n2;

	n1 = get_argument(h, "mul", l);
	n2 = get_argument(h, "mul", l);

	add_node(h, n2 * n1);
}

/**
 * _mod - gets the modulo of the top 2 values of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 * opcode: mod
 */
void _mod(stack_t **h, unsigned int l)
{
	int n1, n2;

	n1 = get_argument(h, "mod", l);
	n2 = get_argument(h, "mod", l);

	if (n1 == 0)
	{
		printf("L%d: division by zero\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	add_node(h, n2 % n1);
}
