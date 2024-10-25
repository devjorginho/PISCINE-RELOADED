/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:16:27 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/25 13:13:33 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	range_size;
	int	i;

	if (min >= max)
		return (NULL);
	range_size = (max - min);
	range = malloc((range_size) * sizeof(int));
	i = 0;
	while (i < range_size)
	{
		range[i] = (min + i);
		i++;
	}
	return (range);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	min;
	int	max;
	int	*result;
	int	i;

	if (argc != 3)
	{
		printf("Usage %s <n1> <n2> <enter> ", argv[0]);
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);

	result = ft_range(min,max);
	printf("The range between %s and %s is : \n", argv[1], argv[2]);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", result[i]);
		if (i < (max - min) - 1)
			printf(", ");
		i++;
	}
	free(result);
	return(0);
}*/
