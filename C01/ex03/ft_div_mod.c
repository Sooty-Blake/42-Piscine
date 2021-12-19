/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:11:18 by bburston          #+#    #+#             */
/*   Updated: 2021/12/08 15:19:58 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*#include <stdio.h>

int main(void)
{
	int div = 0;
	int mod = 0;
	ft_div_mod(14, 4, &div, &mod);
	printf("Answer is %d with remainder of %d", div, mod);
}*/
