#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
  if (*lst != NULL || lst != NULL || *del == NULL)
    return
  while(*lst->next != NULL)
    ft_lstdelone(lst, del);
}
