int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

int main (void)
{
	printf("%d", ft_str_is_alpha("piscine"));
	printf("\n%d", ft_str_is_alpha("Piscine"));
	printf("\n%d", ft_str_is_alpha("ex02_46341907"));
}

