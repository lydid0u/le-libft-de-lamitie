/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:22:02 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/03 18:22:02 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "includes/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// ATTENTION ISALPHA RENVOIE 2 QND C UNE MINUSCULE MAIS SUR GITHUB 
// LES GENS METTENT LES 2 CAS DANS LE RETURN 1 DONC A CHECKER
/*int main()
{
    unsigned char myChar = 's';
    printf("%d\n", ft_isalpha((int) myChar));
    printf("%d", isalpha((int) myChar));
}*/