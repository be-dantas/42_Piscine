/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 13:56:30 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/03 10:27:23 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*original;

	i = 0;
	original = dest;
	while (*dest != '\0')
	{
		dest++;
	}	
	while (i < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (original);
}

/*
int	main(void)
{
	#include <stdio.h>

	char	src[] = "BEATRIZ";
	char	dest[20] = "beatriz";
	unsigned int	nb = 2;
	printf("%s\n", ft_strncat(dest , src, nb));
	return (0);
}
*/