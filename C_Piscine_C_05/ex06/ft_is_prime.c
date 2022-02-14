/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:27:09 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 21:49:37 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	checkprime;

	if (nb < 2)
		return (0);
	checkprime = 2;
	while (checkprime <= nb / 2)
		if (!(nb % checkprime++))
			return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
}
*/
