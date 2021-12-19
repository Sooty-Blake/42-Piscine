/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:21:12 by bburston          #+#    #+#             */
/*   Updated: 2021/12/08 15:27:21 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	if (*b != 0)
	{
		z = *a / *b;
		*b = *a % *b;
		*a = z;
	}
}

/*#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("Answer is %d with remainder of %d", a, b);
}*/
