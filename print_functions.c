#include "monty.h"

/**
 * pall - print all the elements in a dll as numbers.
 * @h: pointer to dll.
`* @l: line number.
 * opcode: pall.
 * Return: void.
 */
void pall(stack_t **h, int l)
{
	(void)l;

	if (!h)
		return;

	while (*h != NULL)
	{
		printf("%d\n", (*h)->n);
		*h = (*h)->next;
	}
	return (count);
}

/**
 * pstr - prints all the elements in a dll as chars.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: pstr.
 * Return: void.
 */
void pstr(stack_t **h, int l)
{
	(void)l;

	if (!h || !*h)
		puts("");

	while (*h != NULL && (*h)->n > 0 && (*h)->n < 127)
	{
		printf("%c\n", (*h)->n);
		*h = (*h)->next;
	}
	return (count);
}

/**
 * pchar - peeks the top of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: pchar.
 * Return: void.
 */
void pint(stack_t **h, int l)
{

	if (!h || !*h)
	{
		printf("L%d: can't pint, %s empty\n", l, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*h)->n);
}

/**
 * pchar - peeks the top of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: pchar.
 * Return: void.
 */
void pchar(stack_t **h, int l)
{
	int value;

	if (!h || !*h)
	{
		printf("L%d: can't pchar, %s empty\n", l, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	value = (*h)->n;
	if (value < 0 || value > 127)
	{

		printf("L%d: can't pchar, value out of range\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%c\n", value);
	}
}
