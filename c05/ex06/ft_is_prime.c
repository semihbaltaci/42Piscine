int	ft_is_prime (int num)
{
	int a;
	a = 2;

	if (num < 2)
		return (0);
	while (a < num)
	{
		if (num % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(7));
}
