/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:45:15 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/16 18:15:42 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main (void)
{
	char destination[34] = "123";
	char *source = "456";
	
	printf("%s\n", ft_strcat(destination, source));
	return (0);
}*/	
