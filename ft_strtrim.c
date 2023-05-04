/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:15:34 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/04 14:15:34 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ischarinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		end;
	char	*str;
	int		i;
	int		j;

	len = ft_len(s1);
	start = 0;
	end = len - 1;
	while (s1[start] && ft_ischarinset(s1[start], set))
		start++;
	while (end >= 0 && ft_ischarinset(s1[end], set))
		end--;
	str = malloc(end - start + 2);
	if (str == NULL || s1 == NULL || set == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i <= end)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}

//int main()
//{
//	char const a[] = "   test   ";
//	char const b[] = " ";
//
//	printf("'%s'\n", ft_strtrim(a, b));
//}
//