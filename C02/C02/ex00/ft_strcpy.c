/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:45:37 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/21 16:54:43 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	source[] = {"Why hello there"};
	char	destination[20];

	ft_strcpy(destination, source);
	printf("Source: %s\n", source);
	printf("Destination: %s", destination);
	return (0);
}
