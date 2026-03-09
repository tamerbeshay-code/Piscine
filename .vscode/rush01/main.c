/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TBeshay <tamer_karam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:41:00 by TBeshay           #+#    #+#             */
/*   Updated: 2026/03/08 19:37:16 by TBeshay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> 

int_parse_input(char *arg, int views[16]);
solve(int   row, int    col , int board[4][4], int views[16]);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    ft_putchar(n + '0');
}

void the_grid(int grid [4][4])
{
    int i;
    int j;

    i=0;
    while (i < 4 )
    {
        j = 0;
       while (j < 4) 
        {  
      ft_putnbr(board [i][j]);
      if (j<3)
        ft_putchar(' ');
        j++;
        }
    ft_putchar('\n');
    i++;
    }
//
}

void    *ft_bzero (void *ptr,  int n)
{
  int i;

    i = 0;
while (i< n)
  {
    *(unsigned char *)(ptr + i)=0;
    i++;
  } 
  return (ptr);
  }
  
int main(int argc ,char **argv)
{
    int board[4][4];
    intviews[16];
    
    if (argc != 2 || !parse_input(argv[1],views))
    {
    write(1,"error\n" , 6);
    return(1);
    }
ft_bzero(board, sizzeof(int) * 4 * 4);
if (!solve (0,0,board,views))
write(1, "error\n",6);
else
print_board(board);
    return(0);
}







    x =4;
y =4;
    printf (the_grid);

}

