#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  *tmp;
  
  if (**lst->content == NULL) //è giusto mettere il doppio asterisco riferendomi al contenuto puntato dal puntatore?
    *lst = new;
  tmp = *lst;
  while (*tmp->next != NULL)
    tmpt = tmp->next;
  tmp->next = new;
  new->next = NULL; //ma questo non lo devo mettere per chiudere la lista?
}
