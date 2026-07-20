//////////////////////////////////////////////////////////////////////
//
//  Dynamic memory allocation for an Array using list technique
//
////////////////////////////////////////////////////////////////////

import java.util.*;

class program139
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in); // memory allocated for an Array

    int Arr[] = {10,20,30,40,50};    // Array is Initialized by List method

    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
      System.out.println(Arr[iCnt]);
    }
  }
}
