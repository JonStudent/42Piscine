/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:40:25 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/27 16:21:33 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
/*
int	main(void)
{
	char str[55];
	int	i;

	i = 'a';
	while (i < 'z')
	{
		str[i - 'a'] = i;
		i++;
	}
	str[0] = ',';
	str[5] = 'B';
	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str));
}
*/
