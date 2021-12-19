/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:12:06 by bburston          #+#    #+#             */
/*   Updated: 2021/12/14 11:26:07 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
}*/
