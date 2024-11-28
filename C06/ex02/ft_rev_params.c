/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:32:30 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/28 13:45:24 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc -1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			putchar(argv[i][j]);
			j++;
		}
		putchar('\n');
		i--;
	}
	return (0);
}
