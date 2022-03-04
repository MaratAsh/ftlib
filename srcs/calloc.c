#include <stdlib.h>
#include <stdio.h>

int	ft_calloc(int a, int b);

int	main(void)
{
	printf("%p\n", calloc(-1, -1));
	printf("%p\n", ft_calloc(-1, -1));
}
