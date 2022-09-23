#include "lists.h"

/**
  * add_dnodeint_end - adds new node at end of doubly linked list.
  * @head: double pointer to list.
  * @n: New node.
  *
  * Return: address to new element or NULL.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_Node;
	dlistint_t *temp;

	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		new_Node->prev = NULL;
		*head = new_Node;
		return (new_Node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_Node;
	new_Node->prev = temp;

	return (new_Node);
}
