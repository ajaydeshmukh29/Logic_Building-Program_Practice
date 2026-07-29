//  Practice on Digit Number Topic

import java.util.*;

class DigitX
{
  public int SumDigits(int iNo)
  {
    int iSum = 0;

    while (iNo != 0) 
    {
      iNo = iNo / 10;

      iSum = (iNo % 10) + iSum;
    }
    return iSum;
  }
}

class program90
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    DigitX dobj = new DigitX();

    int iValue = 0;
    int iRet = 0;

    System.out.println("Enter number : ");
    iValue = sobj.nextInt();
    
    iRet = dobj.SumDigits(iValue);

    System.out.println("Number of digit : "+iRet);
  }
}
