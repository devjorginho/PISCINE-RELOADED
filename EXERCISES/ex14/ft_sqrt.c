/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:43:15 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/24 12:49:58 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	while (x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	int n1 = 9;
	printf(".....::JORGINHO's PROGRAM::.....\n\n");
	printf("The number is %d\n", n1);
	printf("The square is %d", ft_sqrt(n1));
}*/
