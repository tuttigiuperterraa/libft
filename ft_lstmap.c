#include "libft.h"

t_list *set_header(t_list *lst, t_list *new_list, t_list *head, void (*f)(void *))
{
  new_list->content = f(lst->content);
  new_list->next = NULL;
  new_head = new_list;
  lst = lst->next;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list  *new_list;
  t_list  *new_head;

  if (lst == NULL)
    return (NULL);
  new_list = malloc(sizeof(t_list));
  if (!new_list)
    return (NULL);
  set_header(lst, new_list, new_head, del);
  while (lst->content != NULL)
  {
    new_list = new_list->next;
    new_list = malloc(sizeof(t_list))
    if (!new_list)
    {
      ft_lstclear(&new_head, del);
			return (NULL);
    }
    new_list = f(lst->content);
    new_list->next = NULL;
    lst = lst->next;
  }
  return (new_head);
}
