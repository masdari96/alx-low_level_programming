#include "lists.h"
/**
 * free_listint - This func frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
