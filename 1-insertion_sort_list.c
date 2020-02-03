#include "sort.h"
/**
 *insertion_sort_list - fn
 *@list: list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *m, *s;
if (!list || !(*list) || !(*list)->next)
return;
m = *list;
while (m)
{
s = m;
while (s->prev && s->n < s->prev->n)
{
s->prev->next = s->next;
if (s->next)
{
s->next->prev = s->prev;
}
s->next = s->prev;
s->prev = s->prev->prev;
s->next->prev = s;
if (!s->prev)
*list = s;
else
s->prev->next = s;
print_list(*list);
}
m = m->next;
}
}
