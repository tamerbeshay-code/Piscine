/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:59:16 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/05 15:59:17 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	//while letter is less than or equal to z
	while (letter <= 'z')
	{
		//print letter
		write(1, &letter, 1);

		//go to next letter
		letter++;
	}
}
/* int	main(void)
{
	ft_print_alphabet();
} */