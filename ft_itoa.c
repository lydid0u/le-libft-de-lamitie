/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:24:19 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/03 18:24:19 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"
// la diff/connexion entre la len et lindex =>
//str = "ABCDE" la len est de 5
// le E = str[4]
//str == A B C D E
//ind == 0 1 2 3 4 -5-(len)
//len == 1 2 3 4 5
// du coup len - 1 = dernier index, car la len commence a 1 son comptage, 
//et lindex lui commence a 0, 
//ce qui cree un decalage
//du coup si jutilise la len comme index: str[len] = '/0'
// du coup 
// char* str = malloc(sizeof(char) * len + 1);
// str[len] = '\0'
static int	count_len(long int n)
{	
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long int	n;
	int			len;
	char		*str;
	int			digit;

	str = malloc(sizeof(char) * len + 1);
	len = count_len(n);
	n = nb;
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len = len -1;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		digit = n % 10;
		str[len] = digit + '0';
		n /= 10;
		len--;
	}
	return (str);
}
// int main()
// {
//    int a = -2147483648;
//    printf("%s\n", ft_itoa(a));
//    printf("%s\n", ft_itoa(123));
//    printf("%s\n", ft_itoa(-123));
//    printf("%s\n", ft_itoa(0));
//    printf("%s\n", ft_itoa(3434534));
//    printf("%s\n", ft_itoa(-454));
//    printf("%s\n", ft_itoa(43343));
//    ft_itoa(-214740648);
//    // DANS LE CAS 654
//    len = 3
//    jfais un malloc de 3 + 1
//    str[len] = '\0' c pareil que str[3]
// 	len - 1; (len =2)
// 	str[len] = 4 soit le dernier caratere 
// 	len -1;(len =1)
// 	str[len] = 5
// 	len -1;(len =0)
// 	str[len] = 6
//    */
//      // DANS LE CAS -654
//    /*
//    len = 4
//    jfais un malloc de len + 1
//    str[len] = '\0' c pareil que str[4]
//    //str[0] = '-'
// 	len - 1; (len =3)
// 	str[len] = 4 soit le dernier caratere 
// 	len -1;(len =2)
// 	str[len] = 5
// 	len -1;(len =1)
// 	str[len] = 6

// 	du coup tarrete la copie a str[1]
//    */
// }