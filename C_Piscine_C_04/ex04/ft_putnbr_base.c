/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:55:50 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 13:06:04 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nbr, char *base, unsigned int size)
{
	unsigned int	unbr;

	if (nbr < 0)
	{
		write(1, "-", 1);
		unbr = -nbr;
	}
	else
		unbr = nbr;
	if (unbr >= size)
		ft_putnbr(unbr / size, base, size);
	write(1, &base[unbr % size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int	go;

	i = -1;
	go = 1;
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
		ft_putnbr(nbr, base, i);
}
/*
int	main(void)
{
	char	base[] = "012";
	ft_putnbr_base(34, base);
}
*/
