#include "ft_select.h"

t_lst *initialize_list(int argc, char **argv)
{
  t_lst *head;
  t_lst *tail;
  int i;

  i = 0;
  head = NULL;
  
  while (++i < argc)
  {
    if (!head)
    {
      head = create_head(ft_copystr(argv[i]));
      tail = head;
    }
    else
    {
      append_node(head, tail, ft_copystr(argv[i]));
      tail = tail->next;
    }
  }
  return head;
}