/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:25:37 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 14:06:10 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	cap_next;

	cap_next = 1;
	while (*str){
		if (*str >= 'a' && *str <= 'a){
			if (cap_next){
				*str = *str - 32;
				cap_next = 0;
			}
		}
		else if (*str >= 'A' && *str <= 'Z'){
			if (!(cap_next)){
				*str = *str + 32;
			}
			else {
					cap_next = 0;
			}
		}
		else {
			cap_next = 1;
		}
		str++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "this string will be changed";
	char	str2[] = "LETS SEE WHAT HAPPENS WITH THIS";
	char	str3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	return (0);
}*/
