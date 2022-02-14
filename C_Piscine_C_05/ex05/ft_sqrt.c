/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:03:51 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 21:01:06 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	sqr;

	sqr = 1;
	while (sqr * sqr < nb)
		sqr++;
	if (sqr * sqr == nb)
		return (sqr);
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_sqrt(1));
}
*/
