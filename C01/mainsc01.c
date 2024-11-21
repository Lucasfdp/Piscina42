ex00

int	main(void)
{
	int	n;
	int	*p1;

	n = 6;
	p1 = &n;
	printf("Number before: %d\n", n);
	ft_ft(p1);
	printf("Number after: %d", n);
	return (0);
}

ex01

int	main(void)
{
	int	n;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	n = 5;
	p1 = &n;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	printf("num antes %d", n);
	printf("\n");
	ft_ultimate_ft(p9);
	printf("Num despues %d", n);
	return (0);
}

ex02

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	printf("A before function: %d\n", a);
	printf("B before function: %d\n", b);
	ft_swap(&a, &b);
	printf("A after function: %d\n", a);
	printf("B after function: %d", b);
	return (0);
}

ex03

int	main(void)
{
	int	a;
	int	b;
	int	division;
	int	remainder;

	a = 10;
	b = 3;
	
	ft_div_mod(a, b, &division, &remainder);
	printf("This division equals:%d\n", division);
	printf("The remainder is:%d", remainder);
}

ex04

int	main(void)
{
	int	a;
	int	b;

	a = 101;
	b = 25;
	ft_ultimate_div_mod(&a, &b);
	printf("Division:%d\n", a);
	printf("Remainder:%d", b);
	return (0);
}

ex05

int	main(void)
{
	ft_putstr("Why hello there");
	return (0);
}

ex06

int	main(void)
{
	char	*message;

	int	length;

	message = "Why hello there";
	length = ft_strlen(message);
	printf("String length is:%d", length);
	return (0);
}

ex07

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	size = 5;

	printf("Original array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	ft_rev_int_tab(array, size);

	printf("Reversed array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}

ex08

int	main(void)
{
	int	array[] = {2, 17, 42, 6, 11, 25, 10, 99, 18};
	int	size = 9;
	int	i = 0;
	int	j = 0;

	printf("Initial Array: ");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(array, size);
	printf("Ordered array: ");
	while (j < size)
	{
		printf("%d", array[j]);
		j++;
	}
}
