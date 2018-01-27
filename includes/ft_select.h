#ifndef FT_SELECT_H
# define FT_SELECT_H

#include <unistd.h>
#include <stdlib.h>
#include <termcap.h>
#include "libft.h"

typedef struct  s_lst 
{
  struct s_lst *next;
  struct s_lst *prev;
  char          *value;
  int           isEnd;
}               t_lst;

/*
** list/
*/

t_lst *initialize_list(int argc, char **argv);
t_lst *create_head(char *value);
t_lst *create_node(void);
void  append_node(t_lst *head, t_lst *tail, char *value);
void  display_list(t_lst *head);


/*
** termcap/
*/

int get_term_data(void);

#endif