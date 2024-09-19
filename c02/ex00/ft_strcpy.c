/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:05:46 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/15 15:18:01 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0') 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest); 
}

/*
#include <stdio.h>
int main (void)
{
	char	destination[] = "byegujhfee";
	char 	source[] = "mhf";
	
	ft_strcpy(destination, source);
	printf("%s\n", destination);
	return (0);
}*/
