/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:17:00 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/01 14:57:19 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		while (!((*str >= 32 && *str <= 127) || (*str == '\0')))
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
	ft_str_is_printable(str);
	int	result = ft_str_is_printable(str);
	printf("O resultado é: %d\n", result);
	return (0);
}
*/