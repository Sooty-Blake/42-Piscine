/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:44:20 by bburston          #+#    #+#             */
/*   Updated: 2021/12/09 19:10:22 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
		{
			i++;
		}
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char string[] = "pogchamp";
	printf("%s", ft_strupcase(string));
}*/
