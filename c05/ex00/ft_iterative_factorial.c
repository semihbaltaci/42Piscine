int	ft_iterative_factorial(int nb)
{
	int result;
	result = 1;

	if(nb < 0)
		return (0);


	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main (void)
{
	rintf("%d\n",ft_iterative_factorial(9));
	printf("%d\n",ft_iterative_factorial(-4));
	printf("%d\n",ft_iterative_factorial(0));
	return 0;
}
