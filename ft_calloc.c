/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:07:51 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/03 18:13:37 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	nmemb_size;
	size_t	i;

	nmemb_size = nmemb * size;
	i = 0;
	if (nmemb == 0 || size == 0 || nmemb != nmemb_size / size)
		return (NULL);
	ptr = malloc(nmemb_size);
	while (nmemb_size > i)
		ptr[i++] = 0;
	return (ptr);
}
