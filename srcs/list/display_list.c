#include "ft_select.h"

void display_list(t_lst *head)
{
  t_lst *curr;

  curr = head;
  while (curr)
  {
    ft_printf("%s\n", curr->value);
    if (curr->isEnd)
      break;
    curr = curr->next;
  }
}