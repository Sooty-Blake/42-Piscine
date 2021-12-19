/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:11:06 by bburston          #+#    #+#             */
/*   Updated: 2021/12/09 19:20:45 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
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
	char a[] = "POGCHAMP";
	printf("%s", ft_strlowcase(a));
}*/
