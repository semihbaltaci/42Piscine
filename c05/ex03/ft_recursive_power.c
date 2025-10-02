int	ft_recusive_power(int num, int power)
{
	if (power < 0)
		return (0);

	if (power == 1)
		return (1);
	else
		return (num * ft_recursive_power(num, --power));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(6,0));
	printf("%d\n", ft_recursive_power(3,2));
}
