#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	return(n > 0 && !(n & (n - 1)));
}

int main()
{
	printf("%d", is_power_of_2(5));
	return (0);
}
