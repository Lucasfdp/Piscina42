/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:46:23 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/08 14:15:46 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_letter;
	char	last_letter;

	first_letter = 'a';
	last_letter = 'z';
	while (first_letter <= last_letter)
	{
		write(1, &first_letter, 1);
		first_letter++;
	}
}
