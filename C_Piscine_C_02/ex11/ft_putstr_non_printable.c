/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:51:14 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 14:31:45 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	make_hex(char *hex)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		if (i < 10)
			hex[i] = '0' + i;
		else
			hex[i] = 'a' + (i - 10);
	}
}

void	unprintable(char *str, int i)
{
	int		x;
	char	tmp[20];
	char	hex[17];

	make_hex(hex);
	x = 0;
	while (str[i])
	{
		tmp[x++] = hex[(str[i] % 16)];
		str[i] /= 16;
	}
	write(1, "\\", 1);
	if (x == 1)
		tmp[x++] = '0';
	while (x > 0)
		write(1, &tmp[--x], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
			unprintable(str, i);
	}
}
/*
int	main(void)
{
	//char	str[] = {'a', 25,'b',31,'c','d',14 };
	char	str[] = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str);
	return (0);
}
*/
