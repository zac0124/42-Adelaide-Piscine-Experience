#include <unistd.h>

int	main(void)
{
	int lower;
	int upper;

	lower = 'a';
	upper = 'B';
	while(upper <= 'Z')
	{
		write(1,&lower,1);
		write(1,&upper,1);
		lower += 2;
		upper += 2;
	}
	write(1, "\n", 1);
	return (0);
}
