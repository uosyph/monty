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

/**
 * rotl - move the top elment of the stack to the back.
 * @h: head of the dll.
 * @l: line number.
 * opcode: rotl.
 * Return: void.
 */
void rotl(stack_t **h, int l)
{
	(void)l;
	stack_t *node, *tmp;

	if (!h || !*h)
		return;
	if (!(*h)->next)
		return;

	node = pop(h);
	node->next = NULL;

	tmp = *h;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;
	node->previous = tmp;
}

/**
 * rotr - moves the last elment of the stack to the top.
 * @h: pointer to dll.
 * @l: line number.
 * opcode: rotr.
 * Return: void.
 */
void rotr(stack_t **h, int l)
{
	(void)l;
	stack_t *node;

	if (!h || !*h)
		return;
	if (!(*h)->next)
		return;

	node = dequeue(h);
	node->previous = NULL;

	node->next = *head;
	(*head)->previous = node;
	*head = node;
}
