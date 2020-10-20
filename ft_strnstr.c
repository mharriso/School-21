#include "libft.h"

char *ft_strnstr (const char *big, const char *little, size_t len)
{
  size_t i;

  if(!little)
    return ((char *)big);
  i = 0;
  while(big[i] && i < len)
  {
    if(ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
        return ((char *)&big[i]);
    i++;
  }
  return (NULL);
}
