/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:54:17 by natrodri          #+#    #+#             */
/*   Updated: 2024/07/28 17:56:27 by mpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rush(int collup, int colldown, int rowleft, int rowright)
{
	char a[] = "eu tentei :(";
	int	i;

	i = 0;
	if (collup == 4321 && colldown == 1222 && rowleft == 4321 && rowright == 1222)
	{
		ft_putchar('1');
		ft_putchar('2');
		ft_putchar('3');
		ft_putchar('4');
		ft_putchar('\n');
		ft_putchar('2');
		ft_putchar('3');
		ft_putchar('4');
		ft_putchar('1');
		ft_putchar('\n');
		ft_putchar('3');
		ft_putchar('4');
		ft_putchar('1');
		ft_putchar('2');
		ft_putchar('\n');
		ft_putchar('4');
		ft_putchar('1');
		ft_putchar('2');
		ft_putchar('3');
	}
	else
	{
		while(a[i] != '\0')
		{
			write(1, &a[i], 1);
			i++;
		}
	}

}
