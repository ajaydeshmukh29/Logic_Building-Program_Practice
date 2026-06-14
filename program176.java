import java.util.*;

public class program176 
{
  public static void Display(int iNO)
  {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
      if(iCnt % 2 == 0)
      {
        System.out.println("*\t");
      }
      else
      {
        System.out.println(iCnt+"\t");
      }
    }
    System.out.println();
  }

  public static void main(String[] args) 
  {
       
  }
  
}