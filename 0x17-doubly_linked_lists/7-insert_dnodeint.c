#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts new node at a given position.
  * @h: double pointer to head node of d-list.
  * @idx: position to add new node.
  * @n: data to add to new node.
  *
  * Return: address of new node or NULL
  * om failure.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_Node;
	dlistint_t *temp;
	unsigned int index = 0;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_Node = add_dnodeint(h, n);
		return (new_Node);
	}
	temp = *h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (idx == i)
	{
		new_Node = add_dnodeint_end(h, n);
		return (new_Node);
	}
	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->n = n;
	temp = *h;
	while (index < idx)
	{
		temp = temp->next;
		index++;
		if (temp == NULL)
		{
			free(new_Node);
			return (NULL);
		}
	}
	new_Node->prev = temp->prev;
	new_Node->next = temp;
	temp->prev->next = new_Node;
	temp->prev = new_Node;
	return (new_Node);
}
}
