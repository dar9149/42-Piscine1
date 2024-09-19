/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:11:55 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/16 15:33:28 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0; 
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *src = "Hallöchen";
	char dest[10];

	ft_strncpy(dest, src, 1);
	printf("%s\n", dest);
	return (0);
}
