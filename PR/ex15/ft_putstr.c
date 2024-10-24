/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:51:08 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/24 12:58:30 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
/*int	main()
{
	char	string[50] = "Hello how are you ?\n";
	char	jorginhotag[50] = ".....::JORGINHO's PROGRAM::.....\n\n";
	ft_putstr(jorginhotag);
	ft_putstr(string);
	return(0);
}*/
