#include <stdio.h> 
#include <stdlib.h>

int main (void)
{ 
long long num=0;
long long num2;
long long d=2;

printf("Enter a number to factor: ");
scanf("%lld", &num);
num2=num;

while(num != 0)
{ 
if(num%d==0)
	{
	num = num / d;
	if(num==1)
    	break;
	}
else{ d = d+1; }
 }
printf("The largest prime factor of %lld is: %lld\n", num2, d); 
return 0; 
}
