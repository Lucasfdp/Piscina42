/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:30:30 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 17:02:14 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
	str++;
	}
	return(1);
}
#include <stdio.h>

int	main(void)
{
	char	str1[] = "UPPERCASE";
	char	str2[] = "UPPERC@SE and 0ther stuff1";
	char	str3[] = "";

	ft_str_is_uppercase(str1);
	ft_str_is_uppercase(str2);
	ft_str_is_uppercase(str3);
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	return (0);
}
