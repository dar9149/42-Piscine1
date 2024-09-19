/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:30:22 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/02 16:48:53 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7')
	{
		write (1, ", ", 1);
	}
}

void	change_values(char *a, char *b, char *c)
{
	if (*c > '9')
	{
		(*b)++;
		*c = 0;
	}
	if (*b > '8')
	{
		(*a)++;
		*b = *a + 1;
		*c = *b + 1;
	}
}

void	function_3(char a, char b, char c)
{
	while (a <= '7')
	{
		if (c <= b)
		{
			c = b + 1;
		}
		if (c <= a)
		{
			c = a + 1;
		}
		if (b <= a)
		{
			b = a + 1;
		}
		print_numbers(a, b, c);
		c++;
		change_values(&a, &b, &c);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	function_3 (a, b, c);
}
