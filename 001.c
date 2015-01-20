#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
	int x;
	int sum1 = 0;
	
	for (x=1; x<1000; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
		sum1 += x;
		}
	}

	printf("The sum of all multiples of 3 and 5 below 1000 is %d\n", sum1);
	system("pause");
	return 0;
}
