#include "ft_select.h"

t_lst *create_node(void)
{
  t_lst *node;

  node = (t_lst *)malloc(sizeof(t_lst));
  node->next = NULL;
  node->prev = NULL;
  node->isEnd = 0;
  return node;
}