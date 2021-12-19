/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:34:50 by bburston          #+#    #+#             */
/*   Updated: 2021/12/14 10:46:05 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 0;
	if (nb == 0)
	{
		return (1);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
}*/
