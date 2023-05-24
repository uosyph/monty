#include "monty.h"

/**
 * add_node - pushs or enqueues an element at the beginning of the stack.
 * @head: pointer to dll.
 * @n: value to add.
 * Return: pointer to new node or NULL.
 */
stack_t *add_node(stack_t **head, const int n)
{
	stack_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}

/**
 * free_stack - frees a dll of ints.
 * @head: pointer to a dll.
 * Return: void.
 */
void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * pop - gets the node at the beginning.
 * @head: pointer to a dll.
 * Return: pointer to the node or NULL.
 */
stack_t *pop(stack_t **head)
{
	stack_t *pnt;

	if (!head || !*head)
		return (NULL);

	pnt = *head;
	*head = (*head)->next;

	if (*head)
		(*head)->previous = NULL;

	return (pnt);
}

/**
 * dequeue - gets the node at the end.
 * @head: pointer to a dll.
 * Return: pointer to node or NULL.
 */
stack_t *dequeue(stack_t **head)
{
	stack_t *pnt;

	if (!head || !*head)
		return (NULL);

	pnt = *head;
	while (pnt->next != NULL)
		pnt = pnt->next;

	if (pnt->previous)
		(pnt->previous)->next = NULL;
	else
		*head = NULL;

	return (pnt);
}
