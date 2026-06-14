// Input : 7
// Output : 1 * 2 * 3 * 4 
// iCnt   : 1 2 3 4 5 6 7 

import java.util.*;

public class program177 
{
  public static void Display(int iNO)
  {
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1, iCount = 1; iCnt <= iNO; iCnt++)
    {
      if(iCnt % 2 == 0)
      {
        System.out.print("*\t");
      }
      else
      {
        System.out.print(iCount+"\t");
        iCount++;
      }
    }
    System.out.println();
  }

  public static void main(String[] args) 
  {
       Scanner sobj = new Scanner(System.in);
       int iValue = 0;

       System.out.println("ente the number : ");
       iValue = sobj.nextInt();

       Display(iValue);
  }
  
}