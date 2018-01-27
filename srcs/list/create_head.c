#include "ft_select.h"

t_lst *create_head(char *value)
{
  t_lst *head;

  head = create_node();
  head->value = value;
  return head;
}