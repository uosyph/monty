#include "monty.h"

/**
 * swap - swaps the values of the top and the last element.
 * @h: head of the dll.
 * @l: line number.
 * opcode: swap.
 * Return: void.
 */
void swap(stack_t **h, int l)
{
	int value0;

	if (!h || !*h)
	{
		printf("L%d: can't swap, stack too short\n", l);
		free_stack(*h);
		free(command);
		exit(EXIT_STATUS);
	}

	value0 = (*h)->n;

	if ((*h)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", l);
		free_stack(*h);
		free(command);
		exit(EXIT_STATUS);
	}

	(*h)->n = ((*h)->next)->n;
	((*h)->next)->n = value0;
}
