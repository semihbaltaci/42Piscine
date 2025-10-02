void	ft_putchar (char c)
{
	write(1, &c, 1)
}

void	ft_putnbr (int nb)
{
	long int n;
	n = nb;

	if (n < 0)
	{
		ft_putchar('-')
		n *= -1;
	}

	if (n >= 0 && n <= 9)
		ft_putchar (n + '0');

	if (n > 9)
	{
		ft_putnbr (n / 10);
	
		ft_putnbr (n % 10);
	}
}

int	main (void)
{
	ft_putnbr (42);
}
