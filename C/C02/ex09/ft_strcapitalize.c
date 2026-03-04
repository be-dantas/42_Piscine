/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:32:40 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/02 18:36:50 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*lower_string(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	lower_string(str);
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

char	*lower_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	#include <stdio.h>
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; Cinquenta+e+um";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/