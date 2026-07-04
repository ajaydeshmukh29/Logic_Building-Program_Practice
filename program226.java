/*
  iRow = 4
  icol = 4

a
bb
ccc
dddd

*/

import java.util.*;

class Pattern
{
  public void Display(int iRow, int iCol)
  {
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
    {
      for(j = 1; j <= i; j++)
      {
          System.out.print(ch+"\t");
      }
      System.out.println();
      
    }
  }
}

public class program226
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iValue1 = 0, iValue2 = 0;
    
    System.out.println("Enter number of Row : ");
    iValue1 = sobj.nextInt();

    System.out.println("Enter number of column : ");
    iValue2 = sobj.nextInt();

    Pattern pobj = new Pattern();

    pobj.Display(iValue1, iValue2);

  }
  
}
