/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:34:41 by luferna3          #+#    #+#             */
/*   Updated: 2024/11/19 18:06:21 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	change;

	change = 1;
	while (change)
	{
		i = 0;
		change = 0;
		while (i < size - 1)
		{
			while (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i +1];
				tab[i + 1] = tmp;
				change = 1;
			}
			i++;
		}
	}
}

/*int	main(void)
{
	int	array[] = {2, 17, 42, 6, 11, 25, 10, 99, 18};
	int	size = 9;
	int	i = 0;
	int	j = 0;

	printf("Initial Array: ");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(array, size);
	printf("Ordered array: ");
	while (j < size)
	{
		printf("%d", array[j]);
		j++;
	}
}*/
