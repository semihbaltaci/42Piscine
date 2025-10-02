int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int    i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main (void)
{
	printf("%d", ft_strncmp("abcde", "acbcfg", 3));
	printf("%d", ft_strncmp("abcde", "abcfg", 5));
	
	return 0;
}
