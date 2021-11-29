#include <stdio.h>

void ft_putchar(char c);

void rush(x,y);

int main(void)

{ int rows =0;
  int column = 0;

	scanf("%d", &rows);
	
	for (int y = rows; y >= 1; y++)
	{
		for (int x = column; x >= column; x++)

	{column2 = column == 0 || column ==x-1;
		if (rows ==0 || rows == y-1)
			printf(column2, 'o','-');
		else
			printf(column2, '|', ' ');
	}
	}
	printf("\n");
}
