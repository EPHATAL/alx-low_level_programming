#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*list_len - element of a list
*@h: Linked list
*
*Return: number of elements of a list
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
