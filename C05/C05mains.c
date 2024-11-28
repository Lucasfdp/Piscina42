ex00 

#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;

	printf("Introduce number");
	scanf("%d", &number);
	result = ft_iterative_factorial(number);
	printf("%d", result);
	return (0);
}

ex01

#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;

	printf("Introduce number: ");
	scanf("%d", &number);
	result = ft_recursive_factorial(number);
	printf("%d", result);
	return (0);
}

ex02

#include <stdio.h>

int	main(void)
{
	int	number;
	int	power;
	int	result;

	printf("Please introduce a number: ");
	scanf("%d", &number);
	printf("Please introduce a power: ");
	scanf("%d", &power);
	result = ft_iterative_power(number, power);
	printf("%d", result);
	return (0);
}

ex03

#include <stdio.h>

int	main(void)
{
	int	number;
	int	power;
	int	result;

	printf("Please introduce a number: ");
	scanf("%d", &number);
	printf("Please introduce a power: ");
	scanf("%d", &power);
	result = ft_recursive_power(number, power);
	printf("%d", result);
	return (0);
}

ex04

#include <stdio.h>

int	main(void)
{
	int	index;
	int	result;

	printf("Please introduce a number: ");
	scanf("%d", &index);
	result = ft_fibonacci(index);
	printf("%d", result);
	return (0);
}

ex05

#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;

	printf("Please introduce a number: ");
	scanf("%d", &number);
	result = ft_sqrt(number);
	printf("The square root of %d, is %d", number, result);
	return (0);
}

ex06

#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;

	printf("Please introduce a number: ");
	scanf("%d", &number);
	result = ft_is_prime(number);
	if (result == 0)
	{
		printf("This number is not prime!");
	}
	else
	{
		printf("This number is prime!");
	}
	return (0);
}

ex07

