/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:26:05 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/03 10:15:18 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	#include <stdio.h>
	char	s1[] = "BeaDEusgfuxfgudb";
	char	s2[] = "Beade";
	ft_strcmp(s1, s2);
	int	result = ft_strcmp(s1, s2);
	printf("Resultado da comparação: %d\n", result);
	return (0);
}
*/
