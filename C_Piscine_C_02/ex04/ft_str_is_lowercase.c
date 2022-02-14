/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:59:45 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/27 16:17:40 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
	return (1);
}
/*
int	main(void)
{
	char	str[] = "";
	write(1, str, 1);
	printf("\n%d\n", ft_str_is_lowercase(str));
	return (0);
}
*/
