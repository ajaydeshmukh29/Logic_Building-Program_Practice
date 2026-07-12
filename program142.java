//////////////////////////////////////////////////////////////////////////////////////
//
//  Array using Dynamic Memroy allocation technique in Java Programming
//
///////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class program142
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iCnt = 0;

    System.out.println("Enter the number of elemetns : ");
    int iLenght = sobj.nextInt();

    // Brr = (int *)malloc(sizeof(int) * iLength);
    int Brr[] = new int[iLenght];

    System.out.println("Enter the elements : ");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
      Brr[iCnt] = sobj.nextInt();
    }

    System.out.println("Enter of the array are : ");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
      System.out.println(Brr[iCnt]);
    }
    Brr = null;
    System.gc();
  }
}
