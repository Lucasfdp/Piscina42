/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:11:01 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 16:58:18 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	char	str1[] = "lowercase";
	char	str2[] = "UPPERC@SE and 0ther stuff1";
	char	str3[] = "";

	ft_str_is_lowercase(str1);
	ft_str_is_lowercase(str2);
	ft_str_is_lowercase(str3);
	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	return (0);
}
