/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:30:03 by bburston          #+#    #+#             */
/*   Updated: 2021/12/14 10:03:19 by bburston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("pog", "pot"));
	return (0);
}*/
