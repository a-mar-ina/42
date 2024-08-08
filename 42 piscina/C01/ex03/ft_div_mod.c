/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariviei <mariviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:18:07 by mariviei          #+#    #+#             */
/*   Updated: 2024/07/27 02:17:04 by mariviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 10;
	int b = 5;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

    	printf(" %d\n", div);
	printf("%d\n", mod);
	return (0);
}
*/
