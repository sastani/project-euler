public class squares{
  
  public static void main(String args[]){
    int x, y;
    int sumofsq=0;
    int sumofnum=0;
    int square;
    for(x=1;x<=100;x++)
    {square=x*x;
    sumofsq+=square;
    }
    for(y=1;y<=100;y++)
    {sumofnum+=y;}
    System.out.println((sumofnum*sumofnum)-sumofsq);
      
    }
       
}
