/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:34:50 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 14:44:31 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	basefact;

	basefact = 1;
	if (nb < 0 || nb > 2147483647)
		return (0);
	while (nb)
		basefact *= nb--;
	return (basefact);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/
