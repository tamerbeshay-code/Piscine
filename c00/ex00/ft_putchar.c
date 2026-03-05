/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:58:55 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/05 15:58:56 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print the char received as parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
 
int	main(void)
{
	ft_putchar('a');
}