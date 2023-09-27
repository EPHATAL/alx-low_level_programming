#include "lists.h"

/**
*pop_listint - linked list head node deleted
*@head: linked list first elelment
*
*Return: data inside the elements that was deleted,
*or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
listint_t *node;
int n;

if (!head || !*head)
return (0);

node = (*head)->next;
n = (*head)->n;
free(*head);
*head = node;
return (n);
}
