#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slower & faster && faster->next)
{
faster = faster->next->next;
slower = slower->next;
if (faster == slower)
{
slower = head;
while (slower != faster)
{
slower = slower->next;
faster = faster->next;
}
return (faster);
}
}

return (NULL);
}

