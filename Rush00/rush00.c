/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:23:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/15 15:58:15 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	draw(int x, int y);
void	draw_line(int x, char first, char middle, char last);

void	rush(int x, int y)
{
	if (x > 1000 || y > 1000 || x < 1 || y < 1)
	{
		write(1, "Max value for x and y is 1000. Min value is 1.", 46);
		return ;
	}
	draw(x, y);
}

void	draw(int x, int y)
{
	int	line;

	line = 0;
	while (line < y)
	{
		if (line == 0)
		{
			draw_line(x, 'A', 'B', 'C');
		}
		else if (line != 0 && line != y - 1)
		{
			draw_line(x, 'B', ' ', 'B');
		}
		else if (line == y - 1)
		{
			draw_line(x, 'C', 'B', 'A');
		}
		ft_putchar('\n');
		line++;
	}	
}

void	draw_line(int x, char first, char middle, char last)
{
	int	col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
		{
			ft_putchar(first);
		}
		else if (col != 0 && col != x - 1)
		{
			ft_putchar(middle);
		}
		else if (col == x - 1)
		{
			ft_putchar(last);
		}
		col++;
	}
}
