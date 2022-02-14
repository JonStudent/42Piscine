/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:17:06 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/27 16:19:26 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] > 31 && str[i] < 127))
			return (0);
	return (1);
}
/*
int	main(void)
{
	char	str[] = "";
	write(1, str, 1);
	printf("\n%d\n", ft_str_is_printable(str));
	return (0);
}
*/
