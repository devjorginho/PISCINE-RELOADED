/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:41:57 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/22 15:52:57 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>

int	main()
{
	int	n1;
	int	n2;
	n1 = 2;
	n2 = 4;
	printf("The numbers before the swap | N1 : %d | N2 : %d\n\n", n1, n2);
	ft_swap(&n1,&n2);
	printf("The numbers after the swap | N1 : %d | N2 : %d\n\n", n1, n2);
}*/
