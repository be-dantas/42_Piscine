/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:50:12 by bedantas          #+#    #+#             */
/*   Updated: 2025/04/01 14:55:15 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*original;

	original = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Bia";
	char	dest[4];
	printf("dest agora é: %s\n", ft_strcpy(dest, src));
	return (0);
}
*/