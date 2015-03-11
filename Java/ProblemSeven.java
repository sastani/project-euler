public class ProblemSeven
{
	public static void main(String args[])
	{
		int x, y, count;
		x=3; 
		count=1;
		while (count<10001)
		{
			for (y=2; y<x; y++)
			{
			if (x%y==0)
				break;
			}
			if (y==x)
				count++;
			if (count==10001)
				break;
			else
				x++;
		}
		System.out.println(x);
	}
}
