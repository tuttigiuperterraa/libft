#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
  while (lst->content != NULL) //perchè qui non dovrei mettere ->content?
  {
    f(lst->content);
    lst = next;
  }
}
