#include <unistd.h>

int	main(void)
{
	char	a= 'z';
	
	write(1 ,&a, 1);
	write(1, "\n", 1);
	return (0);
}
	
