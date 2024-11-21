/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:58:12 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 16:57:26 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
#include <stdio.h>

int	main(void)
{
	char	str1[] = "This string has numbers, spaces and other fun stuff";
	char	str2[] = "123456789";
	char	str3[] = "";

	ft_str_is_numeric(str1);
	ft_str_is_numeric(str2);
	ft_str_is_numeric(str3);
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
	return (0);
}
