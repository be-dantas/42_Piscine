/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:11:46 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/01 14:56:58 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		while (!((*str >= 'A' && *str <= 'Z') || (*str == '\0')))
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
	ft_str_is_uppercase(str);
	int	result = ft_str_is_uppercase(str);
	printf("O resultado é: %d\n", result);
	return (0);
}
*/