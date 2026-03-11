/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 03:36:54 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/11 03:48:34 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	i=0;
	
	size --;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
	i++;
	size--;
	}

/* 
int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("\nArray after: \n");
	ft_rev_int_tab(tab, size);
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
} */