/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:01:32 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/27 17:46:27 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;

	printf("Introduce number");
	scanf("%d", &number);
	result = ft_iterative_factorial(number);
	printf("%d", result);
	return (0);
}*/
