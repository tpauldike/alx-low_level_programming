#include "lists.h"
/**
  * add_dnodeint - adds a new node at beginning of a doubly
  * linked list.
  * @head: double pointer to list
  * @n: new node.
  *
  * Return: address of the new element or NULL.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node;

	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->prev = NULL;
	new_Node->next = NULL;

	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
		new_Node->next = *head;
		(*head)->prev = new_Node;
		*head = new_Node;
	}
	return (new_Node);
	free(new_Node);
}
