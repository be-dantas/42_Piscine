/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 08:58:49 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/01 14:56:41 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		while (!((*str >= 'a' && *str <= 'z') || (*str == '\0')))
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
	ft_str_is_lowercase(str);
	int	result = ft_str_is_lowercase(str);
	printf("O resultado é: %d\n", result);
	return (0);
}
*/