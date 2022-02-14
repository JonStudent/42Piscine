/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:54:54 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 15:10:18 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	in_base(char a, char *base, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (base[i] == a)
			return (i);
	return (size);
}

int	ft_atoi(char *str, char *base, int size)
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
	while (in_base(*str, base, size) < size)
	{
		nb *= size;
		nb += in_base(*str++, base, size);
	}
	return (nb * i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	go;

	go = 1;
	i = -1;
	while (base[++i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			go = 0;
		while (base[j])
			if (base[i] == base[j++])
				go = 0;
	}
	if (i > 1 && go)
		return (ft_atoi(str, base, i));
	return (0);
}

int	main(void)
{
	char	str[] = "   	-++-2112";
	char	base[] = "012";
	int	nbr;

	nbr = ft_atoi_base(str, base);
	printf("%d\n", nbr);
}

