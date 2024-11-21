/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:21:30 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/08 14:34:23 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	first_letter;
	char	last_letter;

	first_letter = 'a';
	last_letter = 'z';
	while (last_letter >= first_letter)
	{
		write(1, &last_letter, 1);
		last_letter--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
