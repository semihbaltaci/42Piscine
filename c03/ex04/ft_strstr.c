char	*ftft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;

	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;

		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}	
		++i;
	}	
	return (0);
}

int	main(void)
{
	char str[] = "42 Piscine";
	char find[] = "42";

	printf("%s", ft_strstr(str, find));

	char *result = ft_strstr(str, find);
	if (result)
		printf("%s\n", result);
	else
		printf("Not found\n");
}
