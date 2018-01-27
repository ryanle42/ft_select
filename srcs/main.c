#include "ft_select.h"

int main(int argc, char **argv)
{
  t_lst *head;
  
  head = initialize_list(argc, argv);
  display_list(head);
}