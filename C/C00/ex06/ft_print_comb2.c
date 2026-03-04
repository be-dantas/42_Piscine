/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:58:24 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/20 19:27:22 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	char std[7];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			std[0] = a / 10 + '0';
			std[1] = a % 10 + '0';
			std[2] = ' ';
			std[3] = b / 10 + '0';
			std[4] = b % 10 + '0';
			std[5] = ',';
			std[6] = ' ';
			if (a == 98 && b == 99)
			{
				write (1, std, 5);
			}
			else
			{
				write (1, std, 7);
			}
			b++;
		}
		a++;
	}
	
}

int	main (void)
{
	ft_print_comb2();
	return (0);
}
