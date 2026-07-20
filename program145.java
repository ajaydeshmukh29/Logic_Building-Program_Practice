///////////////////////////////////////////////////////////////////////////////////
//
//  Created Dynamic memroy for array and used that memroy and free that memory
//
///////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program145
{
  public static void Update (int Arr[])
  {
    int iCnt = 0;

    for(iCnt = 0; iCnt < Arr.length; iCnt++)
    {
      Arr[iCnt]++;
    }
  }

  public static void main (String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iCnt = 0;

    System.out.println("Enter the number of elements : ");
    int iLenght = sobj.nextInt();

    // Brr = (int *)malloc(sizeof(int) * iLength);
    int Brr[] = new int[iLenght];

    System.out.println("Enter the elements : ");

    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
      Brr[iCnt] = sobj.nextInt();
    }

    System.out.println("Elements of the array before function : ");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
      System.out.println(Brr[iCnt]);
    }
    Update(Brr);
    System.out.println("Elements of the array after function : ");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
      System.out.println(Brr[iCnt]);
    }
    Brr = null;
    System.gc();
  }
}
