/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:43:48 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/03 10:38:04 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_pont;
	char	*find_pont;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		str_pont = str;
		find_pont = to_find;
		while (*str_pont == *find_pont && *str_pont && *find_pont)
		{
			str_pont++;
			find_pont++;
		}
		if (*find_pont == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*
int	main(void)
{
	#include <stdio.h>
	char	str[] = "aaaaaaa";
	char	to_find[] = "tri";
	printf("%s\n", ft_strstr(str, to_find));
	return(0);
}
*/