char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main (void)
{
	char str1[] = "helloWorld";
	char str2[] = "9semih4";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
}

