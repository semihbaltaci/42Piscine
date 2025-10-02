int	ft_recursive_factorial (int nb)
{
	if (nb < 0)
		return (0);

	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb-1));
}

int	main (void)
{
	printf("%i\n", ft_recursive_factorial(9));
	printf("%d\n",ft_recursive_factorial(0));
}
