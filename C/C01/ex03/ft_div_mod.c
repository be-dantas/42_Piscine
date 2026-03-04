/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:33:03 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/19 10:33:16 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a = 6;
	int	b = 2;
	int	*div;
	div = 0;
	int	*mod;
	mod = 0;
	ft_div_mod (a, b, div, mod);
	printf("div: %d\nmod: %d\n", div, mod);
	return (0);

	int	a = 6;
	int	b = 2;
	int	div;
	int	mod;
	ft_div_mod (a, b, &div, &mod);
	printf("div: %d\nmod: %d\n", div, mod);
	return (0);
}
*/