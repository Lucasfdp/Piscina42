/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:02:36 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/27 13:11:55 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	outcome;

	sign = 1;
	outcome = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\r'
		|| *str == ' ' || *str == '\f')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		outcome = outcome * 10 + (*str - '0');
		str++;
	}
	return (outcome * sign);
}
