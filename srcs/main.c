#include "ft_select.h"

int main(int argc, char **argv)
{
  t_lst *head;
  int td;

  head = initialize_list(argc, argv);

  // Passing NULL may not work on Mac
  td = get_term_data();
  ft_printf("fd: %i\n", td);

  display_list(head);
}
