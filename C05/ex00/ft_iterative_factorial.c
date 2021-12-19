/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:26:06 by bburston          #+#    #+#             */
/*   Updated: 2021/12/14 10:32:35 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
}*/
