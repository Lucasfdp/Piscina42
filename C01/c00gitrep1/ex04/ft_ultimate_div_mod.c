/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:19:08 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/19 13:05:40 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 101;
	b = 25;
	ft_ultimate_div_mod(&a, &b);
	printf("Division:%d\n", a);
	printf("Remainder:%d", b);
	return (0);
}*/
