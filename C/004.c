#include <stdio.h>
#include <stdlib.h>

int reverse (int p);

int main ( void )
{
	int x, y;
	int product;
	int palindrome;
	
	for(x=100; x<1000; x++)
		for(y=100; y<1000; y++)
		{
			product=x*y;
			if((product==reverse(product))&&(product>palindrome))
				{
				palindrome=product;
				}	
		}
	printf("The largest palindrome made from the product of two 3-digit numbers is %d\n", palindrome);
	
	return 0;
}

int reverse (int p)
{
	int r=0;
	while (p!=0)
	{
		r=r*10;
		r=r+p%10;
		p=p/10;
	}
	return r;
}
	
