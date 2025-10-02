int	ft_strlen(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	main(void)
{
	char	*str = "piscine";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
}
