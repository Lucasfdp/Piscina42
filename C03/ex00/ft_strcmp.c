/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:15:22 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 18:29:02 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
	i++;
	}
	return (s1[i] == '\0' && s2[i] == '\0');
}
#include <stdio.h>

int	main(void)
{
	char	str1[] = "This is going to be the same";
	char	str2[] = "This is going to be the same";
	char	str3[] = "This is going to be different";
	char	str4[] = "What is your favourite dinosoar?";

	ft_strcmp(str1, str2);
	ft_strcmp(str3, str4);
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	return (0);
}
