/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:44:40 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/12 23:08:56 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	char *string = "gjhrtugh+)";
	printf("%i", ft_str_is_printable(string));
	return (0);
}*/
