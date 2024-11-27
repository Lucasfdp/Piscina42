ex00 

#include <stdio.h>

int main(void)
{
    char    str[] = "These are not the droids you are looking for";

    printf("%d", ft_strlen(str));
    return (0);
}

ex01

int	main(void)
{
	char	str[] = "Wagwarn brudda";

	ft_putstr(str);
	return (0);
}

ex02

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	return (0);
}

ex03

#include <stdio.h>

int	main(void)
{
	char	str1[] = "+----+++--+32345df74";
    char	str2[] = "         -2145";
    char	str3[] = "------------+5769574";
    char	str4[] = "+++++++++++dgf74463";

	int	result1 = ft_atoi(str1);
    int	result2 = ft_atoi(str2);
    int	result3 = ft_atoi(str3);
    int	result4 = ft_atoi(str4);
	printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d", result4);
	return (0);
}
