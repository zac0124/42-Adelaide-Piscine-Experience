#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
			str[i] = str[i] - 32;
			i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char	a[] = "haHAxoXo";
	char	b[] = "4985ur84r";
	char	c[] = "#$IDHFsdf&#dsfsdf";

	ft_strupcase(a);
	printf("%s\n", a);
	ft_strupcase(b);
	printf("%s\n", b);
	ft_strupcase(c);
	printf("%s\n", c);
}


