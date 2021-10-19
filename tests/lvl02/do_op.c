#include <stdio.h>
#include <stdlib.h>

int operator(int ag1, char op, int ag2)
{
	int result;

	result = 0;
	if(op == '*')
		(result = ag1 * ag2);
	if(op == '+')
		(result = ag1 + ag2);
	if(op == '-')
		(result = ag1 - ag2);
	if(op == '/')
		(result = ag1 / ag2);
	if(op == '%')
		(result = ag1 % ag2);
	return (result);
}

int main(int argc, char **argv)
{
	int	v;

	if (argc == 4)
	{
		v = operator(atoi(argv[1]), argv[2][0], atoi(argv[3])); 
		printf("%d\n", v);
	}
	return (0);
}
