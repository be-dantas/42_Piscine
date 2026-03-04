/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:01 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/20 11:03:33 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main (void)
{
	int	*a;
	a = 6;
	int	*b;
	b = 2;
	ft_ultimate_div_mod(a, b);
	printf("a/divisao: %d e b/resto:%d/n", a, b);
	return (0);

	int	a = 6;
	int	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a/divisao: %d e b/resto:%d/n", a, b);
	return (0);
}
*/