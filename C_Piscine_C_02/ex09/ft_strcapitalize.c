/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:15:45 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 13:43:12 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	l1;

	i = -1;
	while (str[++i])
	{
		l1 = 0;
		while ((str[i] >= '0' && str[i] <= 'z')
			&& !(str[i] > '9' && str[i] < 'A')
			&& !(str[i] > 'Z' && str[i] < 'a'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && l1 == 0)
				str[i] -= 32;
			l1 = 1;
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "oi, Tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(str));
}
*/
