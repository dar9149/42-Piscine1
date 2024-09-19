/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:19:04 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/09 15:27:20 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main()
{
	int num1;
	int num2;
	num1 = 8;
	num2 = 3;
	ft_ultimate_div_mod(&num1, &num2);
	printf("Result of division is %d. Remainder is %d.\n", num1, num2);
	return (0);
}*/
