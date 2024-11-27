/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:27:31 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/26 15:51:49 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	if (*to_find == '\0')
	{
		return (str);
	}
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == to_find[0])
		{
			y = 0;
			while (str[x + y] == to_find[y] && to_find[y] != '\0')
			{
				y++;
			}
			if (to_find[y] == '\0')
			{
				return (&str[x]);
			}
		}
		x++;
	}
	return (0);
}
