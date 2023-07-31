#include "lists.h"

/**
 * add_nodeint - Adds  new node at the beginning
 * of a listint_int list
 * @head: A[pinter to the address of the head
 * of the list
 * @n: The integer for the new node
 * Return: if function fails -NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
