/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:27:47 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/22 15:41:18 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
#include <stdio.h>

int	main()
{
	ft_is_negative(5);
	printf("\n");
	ft_is_negative(-1);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	return(0);
}*/
