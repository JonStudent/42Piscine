/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:40:40 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 21:22:48 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	checkprime;

	if (nb < 2)
		return (0);
	checkprime = 2;
	while (checkprime < nb)
		if (!(nb % checkprime++))
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

int	main()
{
	printf("%d\n", ft_find_next_prime(2147483647));
}

