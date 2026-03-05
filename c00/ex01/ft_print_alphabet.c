/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 07:17:36 by Tbeshay           #+#    #+#             */
/*   Updated: 2026/03/05 09:51:24 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	   
	while (letter <= 'z')
	{
		

		
		write(1, &letter, 1);
	

		letter++;
	}
}
/* int	main(void)
{
	ft_print_alphabet();
} */