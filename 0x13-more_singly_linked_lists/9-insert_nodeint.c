#include "lists.h"

/**
 * insert_nodeint_at_index - This func inserts
 *		a new node node in a linked list
 * @head: A pointer to the first node in the list
 * @idx: The index where the new node is added
 * @n: Present the data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new;
	listint_t *p = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	index = 0;
	while (p && index < idx)
	{
		if (index == idx - 1)
		{
			new->next = p->next;
			p->next = new;
			return (new);
		}
		else
			p = p->next;
		index++;
	}
	return (NULL);
}
