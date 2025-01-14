ex00

#include <stdio.h>

int	main(void)
{
	char	str1[] = "This is going to be the same";
	char	str2[] = "This is going to be the same";
	char	str3[] = "This is going to be different";
	char	str4[] = "What is your favourite dinosaur?";

	ft_strcmp(str1, str2);
	ft_strcmp(str3, str4);
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	return (0);
}


ex01

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "This is going to be the same";
	char	str2[] = "This is going to be the same";
	char	str3[] = "This is going to be different";
	char	str4[] = "What is your favourite dinosaur?";

	ft_strncmp(str1, str2, 28);
	ft_strncmp(str3, str4, 32);
	printf("%d\n", ft_strncmp(str1, str2, 28));
	printf("%d\n", ft_strncmp(str3, str4, 32));
	return (0);
}
ex02
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello ";
	char	str2[] = "there";

	char	*strcat = ft_strcat(str1, str2);
	printf("%s", strcat);
}

ex03

#include <stdio.h>
int	main(void)
{
	char	str1[] = "Why hel";
	char	str2[] = "lo there";
	char	*strncat = ft_strncat(str1, str2, 20);
	
	printf("%s", strncat);
	return (0);
}

ex04

#include <stdio.h>

int	main(void)
{
	char	str[] = "These are not the droids you are looking for";
	char	to_find[] = "droids";

	char	*string = ft_strstr(str, to_find);
	
	if(string != NULL)
	{
		printf("%s", string);
	}
	else
	{
		printf("No luck here");
	}
	return (0);
}

ex05

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "These are not the droids you are looking for ";
	char	src[] = "My name jeff";

//	ft_strlcat(dest, src, 100);
	char	number = ft_strlcat(dest, src, 100);

	printf("String is: %s\n", dest);
	printf("String length is: %d", number);
	return (0);
}
