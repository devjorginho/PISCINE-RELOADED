/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:27:28 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/25 12:11:11 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	char	*dup_start;

	size = ft_strlen(src);
	dup = malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	dup_start = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (dup_start);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	char *string = ft_strdup(argv[1]);
	if (argc != 2)
	{
		printf("Write %s <string> and press <enter>", argv[0]);
		return (1);
	}
	printf("Original string: %s\n", argv[1]);
	printf("Duplicated string: %s", string);

	free (string);
	return (0);
}*/
