/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:27:16 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/20 11:01:39 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = i +1;
		temp = 0;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main (void)
{
	int	tab[] = {8, 6, 1, 2, 7, 3};
	int	size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, size);

	int	y = 0;
	while (y < size)
	{
		printf("%d\n", tab[y]);
		y++;
	}
	return (0);
}*/
