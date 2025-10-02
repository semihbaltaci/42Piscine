int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
		i++;
	}
	return (1);
}

int main (void)
{
	printf("%d", ft_str_is_alpha("PİSCİNE"));
	printf("\n%d", ft_str_is_alpha("Piscine"));
	printf("\n%d", ft_str_is_alpha("EX02_46341907"));
}
