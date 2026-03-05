/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:00:30 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/05 16:00:31 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

//check if number received as parameter is negative or positive
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}	
}
/* 
int	main(void)
{
	ft_is_negative(42);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(-42);
	printf("\n");
} */