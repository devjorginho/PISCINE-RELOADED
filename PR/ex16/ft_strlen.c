/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <jluiz-de@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:59:03 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/24 13:06:05 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main()
{
	char	string[50] = "Dota is better than LOL";
	printf("\t\t.....::JORGINHO's PROGRAM::.....\n\n");
	printf("The string : \"%s\" have %d characters\n\n\n\n", 
	string, ft_strlen(string)); //*REMEMBER TO PUT THIS LINE IN THE LINE 29*
	printf("Yes, this program always prints \"true\"...");
	return(0);
}*/
