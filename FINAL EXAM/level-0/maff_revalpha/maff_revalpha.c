#include<unistd.h>

int	main(void)
{
	int	lower;
	int upper;

	lower = 'z';
	upper = 'Y';
	while(upper >= 'A')
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower -= 2;
		upper -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
