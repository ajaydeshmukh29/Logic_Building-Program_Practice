// Input = 7
// Output = A 2 C 4 E 6 G
// iCnt =   1 2 3 4 5 6 7

import java.util.*;

public class program187
{
  public static void Display(int iNO)
  {
    int iCnt = 0;
    char ch = '\0';
    char ch1 = '\0';
    char ch2 = '\0';

    for(iCnt = 1, ch1 = 'A', ch2 = 'a'; iCnt <= iNO; iCnt++, ch1++, ch2++)
    { 
      if(iCnt % 2 == 0)
      {
        System.out.print(ch1+"\t");
        ch1++;
      }
      else
      {
        System.out.print(ch2+"\t");
        ch2++;
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