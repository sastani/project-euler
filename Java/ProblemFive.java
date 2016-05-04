public class ProblemFive 
{
	public static void main(String[] args) 
	{
		int smallest, number;
		smallest=0;
		number=1;
		boolean divisible=false;
		
		while (divisible==false)
		{
			for(int i=1; i<21; i++)
			{
				if (number%i!=0)
				{
					number++;
					break;
				}
				if (i==20)
				{
					smallest=number;
					divisible=true;
					break;
				}
			}
		}
		System.out.println(smallest);
	}
}
