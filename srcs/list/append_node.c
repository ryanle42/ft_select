#include "ft_select.h"

void append_node(t_lst *head, t_lst *tail, char *value)
{
  t_lst *new;

  new = create_node();
  tail->next = new;
  tail->isEnd = 0;
  head->prev = new;
  new->next = head;
  new->prev = tail;
  new->value = value;
  new->isEnd = 1;
}