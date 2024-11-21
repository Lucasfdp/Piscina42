/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:50:24 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/18 16:09:07 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	printf("A before function: %d\n", a);
	printf("B before function: %d\n", b);
	ft_swap(&a, &b);
	printf("A after function: %d\n", a);
	printf("B after function: %d", b);
	return (0);
}*/
