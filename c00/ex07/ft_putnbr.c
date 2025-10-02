void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    char	dig;
    int		temp;
    int		divisor;

    if (nb == 0)
    {
        ft_putchar('0');
        return ;
    }
    ft_putchar('\"');
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    divisor = 1;
    temp = nb;
    while (temp >= 10)
    {
        divisor *= 10;
        temp /= 10;
    }
    while (divisor > 0)
    {
        dig = (nb / divisor) + '0';
        ft_putchar(dig);
        nb %= divisor;
        divisor /= 10;
    }
    ft_putchar('\"');
}

int	main(void)
{
    ft_putnbr(42);
    return (0);
}

