#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end  - adds a new node at the end of a list
* @head: head of the list
* @n: Integer to be inserted
* Return:  the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new = malloc(sizeof(listint_t));

        if (new == NULL)
                return (NULL);
        new->n = n;
        new->next = *head;

        *head = new;

        return (new);
}
