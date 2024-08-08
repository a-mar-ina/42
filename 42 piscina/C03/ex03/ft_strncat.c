/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariviei <mariviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:35:54 by mariviei          #+#    #+#             */
/*   Updated: 2024/08/06 07:54:07 by mariviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest1;

	dest1 = dest;
	while (*dest)
	{
		dest++;
	}
	while (nb > 0 && *src)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (dest1);
}
/*
int	main(void)
{
	char	dest[30] = "finalmente ";
	char	src[] = "dobby esta livre!";

	printf("%s\n", ft_strncat(dest, src, 30));
}*/
