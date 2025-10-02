int	ft_strcmp(char *s1, char*s2)
{
	int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}

int	main (void)
{
	printf("%d\n", ft_strcmp("smh", "smh"));
	printf("%d\n", ft_strcmp("smh", "shm"));
	
}
