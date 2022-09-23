#include "lists.h"
/**
  * print_dlistint - prints all elements of a
  * doubly linked list.
  * @h: pointer to list.
  *
  * Return: number of nodes in the d-list.
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
