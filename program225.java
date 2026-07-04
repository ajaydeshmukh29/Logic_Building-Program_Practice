/*
  iRow = 4
  icol = 4

a
ab
abc
abcd

*/

import java.util.*;

class Pattern
{
  public void Display(int iRow, int iCol)
  {
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
      for(j = 1, ch = 'a'; j <= i; j++,ch++)
      {
          System.out.print(ch+"\t");
      }
      System.out.println();
      
    }
  }
}

public class program225
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
