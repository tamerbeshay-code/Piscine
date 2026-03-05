/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:59:42 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/05 15:59:44 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Imprime as letras de 'z' a 'a'
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';

	//while letter is more than or equal to 'a'
	while (letter >= 'a')
	{
		//print letter
		write(1, &letter, 1);

		//go to previous letter
		letter--;
	}
}
/* int	main(void)
{
	ft_print_reverse_alphabet();
} */