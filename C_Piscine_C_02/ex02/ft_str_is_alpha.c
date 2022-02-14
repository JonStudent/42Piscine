/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:17:28 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/02 09:31:48 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
	return (1);
}
/*
int	main(void)
{
	char	str[] = "olahds";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
*/
