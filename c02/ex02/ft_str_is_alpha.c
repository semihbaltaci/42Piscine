int	ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main (void)
{
	printf("%d", ft_str_is_alpha("piscİNE"));
	printf("\n%d", ft_str_is_alpha("PiscineEx02"));
	printf("\n%d", ft_str_is_alpha("46341907"));
}
