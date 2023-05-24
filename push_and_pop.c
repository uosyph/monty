#include "monty.h"

/**
 * push - adds an element to the queue.
 * @h: pointer to dll.
 * @n: value to add.
 */
void push(stack_t **h, int n)
{
    stack_t *node;

    node = add_node(h, n);

    if (node == NULL)
    {
        puts("Error: malloc failed");
        free_stack(*h);
        exit(EXIT_FAILURE);
    }
}

/**
 * pop - pulls an element from the stack or queue.
 * @h: pointer to dll.
 * @l: line number.
 * Return: void.
 */
void pop(stack_t **h, int l)
{
    statck_t *node;

    if (flag == "stack")
        node = pop_s(h);
    else
        node = dequeue(h);

    if (node == NULL)
    {
        print("L%d: can't pop an empty %s\n", l, flag);
        free_stack(*h);
        exit(EXIT_FAILURE);
    }

    free(node);
}
