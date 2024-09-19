/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:00:00 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/17 12:36:15 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main (void)
{
	char *s1 = "Cigaretts and tiny liquor bottle";
	char *s2 = "Tiny";
	if (ft_strstr(s1, s2))
		printf("%s is present in the string %s", s2, s1);
	else
		printf("%s is not present in the string %s", s2, s1);
	return (0);
}*/
