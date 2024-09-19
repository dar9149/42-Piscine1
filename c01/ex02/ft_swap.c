/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dratushn <dratushn@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:13:57 by dratushn          #+#    #+#             */
/*   Updated: 2024/09/05 15:11:05 by dratushn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int main(void)
{
	int d = 17;
	int e = 73;
	int *a = &d;
	int *b = &e;
	printf("Before:%d\n", d);
	printf("Before:%d\n", e);
	ft_swap(a, b);
	printf("After:%d\n", d);
	printf("After:%d\n", e);
	return(0);
}*/ 
