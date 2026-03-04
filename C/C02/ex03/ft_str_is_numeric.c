/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:46:07 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/01 14:56:11 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		while (!((*str >= '0' && *str <= '9') || (*str == '\0')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	ft_str_is_numeric(str);
	int	result = ft_str_is_numeric(str);
	printf("A string é: %d\n", result);
	return (0);
}
*/