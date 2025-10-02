void	ft_print_alphabet(void)
{
	char c;

	c ='a';
	while (x <='z')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
