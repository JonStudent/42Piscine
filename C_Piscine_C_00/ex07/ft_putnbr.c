/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:22:25 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/02 22:31:52 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	bnb;

	if (nb < 0)
	{
		ft_write('-');
		bnb = -nb;
	}
	else
		bnb = nb;
	if (bnb > 9)
	{
		ft_putnbr(bnb / 10);
		bnb %= 10;
	}
	ft_write(bnb + '0');
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
