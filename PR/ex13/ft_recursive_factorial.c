/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:31:52 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/27 14:40:44 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
#include <stdio.h>
int	main()
{
	int	nb = 5;
	printf(".....::JORGINHO's PROGRAM::.....\n\n");
	printf("The factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	return(0);
}*/
