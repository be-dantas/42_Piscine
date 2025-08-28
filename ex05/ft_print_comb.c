/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:14:31 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/20 19:27:19 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	x;

	x = 0;
	while (x < 999)
	{
		int	a;
		int	b;
		int c;

		a = x / 100;
		b = (x / 10) % 10;
		c = x % 10;
		if (a != b && b != c && a != c)
		{
			char str[4] = {a + '0', b + '0', c + '0', '\0'};
			write(1, str, 3);
		}
		if (a != b && b != c && a != c && x < 987)
		{
			write(1, ", ", 2);
		}
		x++;
	}
}

int	main (void)
{
	ft_print_comb();
	return (0);
}