/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:06:10 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/26 15:11:00 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}
/*
int	main(void)
{
	char str[25];
	int	i;

	i = 'A';
	while (i < 'Z')
	{
		str[i - 'A'] = i;
		i++;
	}
	str[13] = '*';
	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
}
*/
