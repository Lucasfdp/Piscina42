/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:05:56 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 11:24:28 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*lower;

	lower = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (lower);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "THIS STRING WILL BE UNCAPITALISED, WOW!";

	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
	return (0);
}*/
