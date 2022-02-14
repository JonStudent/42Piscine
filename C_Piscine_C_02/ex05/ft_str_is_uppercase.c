/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:10:19 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/27 16:18:02 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	return (1);
}
/*
int	main(void)
{
	char	str[] = "";
	write(1, str, 1);
	printf("\n%d\n", ft_str_is_uppercase(str));
	return (0);
}
*/
