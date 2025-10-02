void	ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
	

int	main(void)
{
	int	v1 = 15;
	int	v2 = 35;
	int	*a = &v1;
	int	*b = &v2;

	printf("Before swap: \n");
	printf("Pointer a points to adress %p and the value is %d \n", a, *a);
	printf("Pointer b points to adress %p and the value is %d\n", b, *b);
	ft_swap(a, b);
	printf("\n");
	printf("After swap: \n");
	printf("Pointer a pointing to adress %p but the value is %d\n", a, *a);
	printf("Pointer b pointing to adress %p but the value is %d \n", b, *b);
} 
