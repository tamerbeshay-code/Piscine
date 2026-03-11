/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 00:43:18 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/11 00:49:55 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/* 
int	main(void)
{
	int	v1 = 15;
	int	v2 = 3;
	int	*a = &v1;
	int	*b = &v2;

	printf("Before ft_ultimate_div_mod: \n");
	printf("Pointer 'a' points to adress %p that has value %d stored\n", a, *a);
	printf("Pointer 'b' points to adress %p that has value %d stored\n", b, *b);
	ft_ultimate_div_mod(a, b);
	printf("\n");
	printf("After ft_ultimate_div_mod: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now has the value %d stored\n", a, *a);
	printf("Pointer 'b' remains pointing to adress %p, but now has the value %d stored\n", b, *b);

} */