#include "lists.h"
/**
  * get_dnodeint_at_index - returns nth node of a doubly linked list.
  * @head: pointer to head node.
  * @index: index of node to be returned.
  *
  * Return: address of required node otherwise, NULL>
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
