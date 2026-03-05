/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:00:09 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/05 16:00:10 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';

	//while number is less than or equal '9'
	while (number <= '9')
	{
		//print number
		write(1, &number, 1);

		//go to next number
		number++;
	}
}
/* 
int	main(void)
{
	ft_print_numbers();
} */