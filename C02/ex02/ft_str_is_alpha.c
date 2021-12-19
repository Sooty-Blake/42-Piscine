/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:32:47 by bburston          #+#    #+#             */
/*   Updated: 2021/12/08 17:50:29 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	int alpha;
	int	bravo;
	int	charlie;
	char a[] = "AbCxYz";
	char b[] = "123890";
	char c[] = "";
	alpha = ft_str_is_alpha(a);
	bravo = ft_str_is_alpha(b);
	charlie = ft_str_is_alpha(c);
	printf("%d\n%d\n%d", alpha, bravo, charlie);
}*/
