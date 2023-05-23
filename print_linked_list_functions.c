#include "monty.h"

/**
 * print_ints - prints all the elements in a dll as numbers.
 * @h: pointer to dll.
`* @l: line number.
 * opcode: pall.
 * Return: numbers.
 */
void print_ints(const stack_t **h, int l)
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
 * print_string - prints all the elements in a dll as chars.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: pstr.
 * Return: chars.
 */
void print_string(const stack_t **h, int l)
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
 * pchar_stack - peeks the top of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: pchar.
 * Return: void.
 */
void pchar_stack(const stack_t **h, int l)
{
	int value;

	if (!h || !*h)
	{
		printf("L%d: can't pchar, stack empty\n", l);
		free_stack(*h);
		free(command);
		exit(EXIT_STATUS);
	}

	value = (*h)->n;
	if (value < 0 || value > 127)
		printf("L%d: can't pchar, value out of range\n", l);
	else
		printf("%c\n", value);
}

/**
 * pchar_queue - peeks the back of the queue.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: pchar.
 * Return: void.
 */
void pchar_queue(const stack_t **h, int l)
{
	int value;

	if (!h || !*h)
	{
		printf("L%d: can't pchar, queue empty\n", l);
		free_stack(*h);
		free(command);
		exit(EXIT_STATUS);
	}

	/*get to the last element*/
	while ((*h)->next != NULL)
		*h = (*h)->next;

	value = (*h)->n;
	if (value < 0 || value > 127)
		printf("L%d: can't pchar, value out of range\n", l);
	else
		printf("%c\n", value);
}
