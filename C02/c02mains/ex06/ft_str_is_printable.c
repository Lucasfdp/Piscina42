/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:35:29 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/20 21:54:55 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
	char	str1[] = "These are printable characters!";
	char	str2[] = "This has some unpriintable characters like œ and €‰";
	char	str3[] = "";

	ft_str_is_printable(str1);
	ft_str_is_printable(str2);
	ft_str_is_printable(str3);
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	return (0);
}
