/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:33:03 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/24 16:17:48 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main()
{
	int x = 1;
	int y = 2;
	ft_swap(&x, &y);
	printf("%d\n", "%d\n", x, y);
	return 0;

	int x = 1;
	int	*pontx;
	pontx = &x;
	int y = 2;
	int	*ponty;
	ponty = &y;
	ft_swap(pontx, ponty);
	printf("%d\n", "%d\n", x, y);
	return 0;
}*/