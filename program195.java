/*   
    iRow = 4
    iCol = 4

   *  *  *  *
   $  $  $  $
   *  *  *  *
   $  $  $  $
*/

import java.util.*;

class program195
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iRow = 4, iCol = 5;
    int i = 0, j = 0;     // let (i = row   and   j = column)

    System.out.println("Enter row : ");
    iRow = sobj.nextInt();

    System.out.println("Enter column : ");
    iCol = sobj.nextInt();

    for(i = 1; i <= iRow; i++)
    {
      for(j = 1; j <= iCol; j++)
      {
        if(i % 2 == 0)
        {
          System.out.print("*\t");
        }
        else
        {
          System.out.print("$\t");
        }
       
      }
       System.out.println();
    }
  }

}
