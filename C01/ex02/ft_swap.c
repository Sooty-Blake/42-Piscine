/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:04:20 by bburston          #+#    #+#             */
/*   Updated: 2021/12/08 15:10:28 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int a = 1;
	int b = 8;

	printf("Your values  a: %d, b; %d\n", a, b);
	ft_swap(&a, &b);
	printf("But swapped O.O  a: %d, b; %d\n", a, b);
}*/
