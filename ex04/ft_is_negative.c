/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:02:26 by bedantas          #+#    #+#             */
/*   Updated: 2025/03/16 16:15:42 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int	x;
	int	y;

	x = 'N';
	y = 'P';
	if (n < 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &y, 1);
	}
}

/*
int main (void) 
{
 	ft_is_negative (2);
 	ft_is_negative (0);
 	ft_is_negative (-2);
 	return (0);
}*/
