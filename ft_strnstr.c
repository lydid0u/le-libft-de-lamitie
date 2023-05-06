/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:23:23 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/03 19:23:23 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <string.h>

static unsigned int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strnstr(const char *str, const char *to_find, size_t n) 
{
    size_t to_find_len;
    const char *end;
	size_t i;

    if (to_find == NULL || str == NULL)
        if (n == 0)
            return (char*) str;
    if (*to_find == '\0') 
        return (char*) str;
    if (*str == '\0')
            return NULL;
	i = 1;
    to_find_len = ft_len(to_find);

    if (n < ft_len(str)) 
        end = str + n - to_find_len;
    else 
        end = str + ft_len(str) - to_find_len;

    while (str <= end) 
    {
        if (*str == *to_find) 
        {
            while (i < to_find_len && *(str + i) == *(to_find + i)) 
            {
                i++;
            }
            if (i == to_find_len) 
                return (char*) str; 
        }
        str++;
    }
    return (0);
}

/*static unsigned int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		to_find_len;
	const char	*end;
	size_t		i;

	i = 1;
	to_find_len = ft_len(to_find);
	if (*to_find == '\0')
		return ((char*)str);
	if (n < ft_len(str))
		end = str + n - to_find_len;
	else
		end = str + ft_len(str) - to_find_len;
	while (str <= end)
	{
		if (*str == *to_find)
		{
			while (i < to_find_len && *(str + i) == *(to_find + i))
				i++;
			if (i == to_find_len)
				return ((char*) str);
		}
		str++;
	}
	return (0);
}*/
