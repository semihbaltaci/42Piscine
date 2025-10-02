void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while ('a' <= c)
	{
		write(1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
