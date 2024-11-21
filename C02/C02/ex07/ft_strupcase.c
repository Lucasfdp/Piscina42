/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:04:22 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 17:04:09 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*upper;

	upper = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (upper);
}
#include <stdio.h>

int	main(void)
{
	char	str[] = "this string is gonna be capitalised, wow";

	ft_strupcase(str);
	printf("%s", ft_strupcase(str));
	return (0);
}
