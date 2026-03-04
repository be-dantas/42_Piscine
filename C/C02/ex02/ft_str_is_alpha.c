/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:04:38 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/01 14:55:48 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		while (!((*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z') || (*str == '\0')))
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
	ft_str_is_alpha(str);
	int	result = ft_str_is_alpha(str);
	printf("A string é: %d\n", result);
	return (0);
}
*/
