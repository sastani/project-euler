#include <stdio.h>
#include <stdlib.h>

#define MAX 4000000

int main ( void )
{
	int x=0;
	int y=1;
	int z=x+y;
	int sum=0;
	
	while (z < MAX){
	x=y;
	y=z; 
	z=x+y;
	if (z % 2 == 0){
	sum+=z;
	}
	
	}
	printf("The sum of all even valued terms of the fibonacci sequence under %d is:\n%d ", MAX, sum);

	return 0;
}
