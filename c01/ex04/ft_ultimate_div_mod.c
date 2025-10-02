void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
int	main(void)
{
	int x;
	int y;

	x = 19;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}
