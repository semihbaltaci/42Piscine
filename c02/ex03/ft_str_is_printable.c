int	ft_str_is_printable(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		
			i++;
		
		else
		
			return (0);
		
	}
	return (1);
}
int	main(void)
{
	printf("%d", ft_str_is_numeric("2205221907"));
	printf("\n%d", ft_str_is_numeric("94Piscine46"));
}
