/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:52:26 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/05 15:07:23 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main (void)
{
	int a = 21;
	int b = 10;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("Division of %d by %d is %d. Remainder is %d.\n", a, b, div, mod);
	return (0);
} */
