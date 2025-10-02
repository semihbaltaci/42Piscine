int	ft_sqrt(int num)
{
	long i;
	i = 0;

	if (num <= 0)
		return (0);

	while (i * i < num)
		i++;

	if (i * i == num)
		return (i);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(25));
}
