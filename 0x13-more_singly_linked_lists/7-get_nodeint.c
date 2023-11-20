#include "lists.h"

/**
*get_nodeint_at_index - linked list returned node at a certain index
*@head: first node
*@index: index of the node
*
*Return: node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
