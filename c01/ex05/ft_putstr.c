/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 00:52:47 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/11 01:16:26 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	// While the string doesn't reach the null
	while (str[i])
	{
		// Each Char passed by the index "i" will be printed
		write(1, &str[i], 1);
		i++;
	}	
}
/* 
int	main(void)
{
	char	*str = "I AM THE ARCHITECT";
	
	ft_putstr(str);
} */