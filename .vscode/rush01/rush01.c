#include<unistd.h> 

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_putnbr(int n)
{
    ft_putchar(n+'0');
}

void the_grid(int grid [4][4])
{
    int x;
    int y;

    x=0;

    while (y<4)
    {
        ft_putnbr(grid[x][y]);
        if (y<3)
        ft_putchar(' ');
        y++;
    }
    ft_putchar('\n');
    x++;

}
int main (void)
{

x =4;
y =4;
    printf (the_grid);

}

