#include "monty.h"

/**
 * nop - stack and queue.
 * @h: pointer to dll.
 * @l: line number.
 */
void nop(stack_t **h, unsigned int l)
{
    (void)h;
    (void)l;
}

/**
 * queue - changes behavior of the queue.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 */
void queue(stack_t **h, unsigned int l)
{
    (void)h;
    (void)l;

    flag = "queue";
}

/**
 * stack - changes behavior of the stack.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 */
void stack(stack_t **h, unsigned int l)
{
    (void)h;
    (void)l;

    flag = "stack";
}
