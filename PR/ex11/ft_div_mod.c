/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:53:30 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/24 11:50:06 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int	main()
{
	int	n1 = 9;
	int	n2 = 3;
	int	div;
	int	mod;
	printf(".....::JORGINHO's PROGRAM::.....\n");
	printf("The numbers are %d and %d\n", n1, n2);
	ft_div_mod(n1, n2, &div, &mod);
	printf("The div is %d\n", div);
	printf("The remainder is %d\n", mod);
}*/
