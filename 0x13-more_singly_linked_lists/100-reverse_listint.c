#include "lists.h"
/**
*reverse_listint - int list reversed
*@head: first node
*
*Return: head address
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *node = NULL, *next = NULL;

if (!head || !*head)
return (NULL);

node = *head;
*head = NULL;
while (node)
{
next = node->next;
node->next = *head;
*head = node;
node = next;
}
return (*head);
}
