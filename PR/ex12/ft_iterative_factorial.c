/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:18:59 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/27 14:40:05 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (f > 1)
	{
		nb = nb * (f - 1);
		f--;
	}
	return (nb);
}
/*#include <stdio.h>

int	main()
{
	int	n1 = 5;
	printf(".....::JORGINHO's PROGRAM::.....\n");
	printf("The factorial of %d is %d\n", n1, ft_iterative_factorial(n1));
	return(0);
}*/
