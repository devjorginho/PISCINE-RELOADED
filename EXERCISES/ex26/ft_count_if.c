/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:54:24 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/22 18:30:27 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	counter;

	if (!tab)
		return (0);
	i = 0;
	counter = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
