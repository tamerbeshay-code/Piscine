/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 08:10:21 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/05 08:11:58 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';

	
	while (letter >= 'a')
	{
		
		write(1, &letter, 1);

		
		letter--;
	}
}
/* int	main(void)
{
	ft_print_reverse_alphabet();
} */