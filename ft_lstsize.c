#include "libft.h"

int ft_lstsize(t_list *lst)
{
  int  size;
  if (lst == NULL)
    return (0);
  size = 0,
  while (lst->next != NULL)
  {
    lst = lset->next;
    size++;
  }
  return (size);
}
