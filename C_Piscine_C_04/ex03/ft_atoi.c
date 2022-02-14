/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:36:49 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 13:05:37 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 1;
	nb = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			i *= -1;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str++ - '0';
	}
	return (nb * i);
}
/*
int	main()
{
	char	str[] = "   +++--+-- 2147483a10";
	int	nbr;

	nbr = ft_atoi(str);
	printf("%d\n", nbr);
	printf("%d\n", atoi(str));
}
*/
