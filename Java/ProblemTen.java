public class ProblemTen{
	public static final int PRIMES_BELOW = 2000000;
	public static void main(String args[]){
		long x, y, sum;
		x=3; 
		sum=2;
		while(x<PRIMES_BELOW)
		{
		for (y=2; y<x; y++)
			{if(x%y==0)
				break;
			}
		if(y==x)
			{sum+=y;
			 x++;
			}
		x++;
		}
		System.out.println(sum);		
	}
}
