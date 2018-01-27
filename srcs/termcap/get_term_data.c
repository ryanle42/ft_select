#include "ft_select.h"

int get_term_data(void)
{
  char *termtype;
  int success;

  termtype = getenv("TERM");
  if (termtype == NULL)
  {
    ft_printf("Terminal type is not defined.\n");
    exit(-1);
  }
  success = tgetent(NULL, termtype);
  if (success < 0)
  {
    ft_printf("Could not access termcap data base.\n");
    exit(-1);
  }
  if (success == 0)
  {
    ft_printf("Terminal type %s is not defined", termtype);
    exit(-1);
  }
  return success;
}
