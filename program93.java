import java.util.*;

class DigitX
{
  public boolean CheckPallindrome(int iNo)
  {
    int iDigits = 0;
    int iRev = 0;
    int iTemp = 0;
  
    iTemp = iNo;

    while (iNo != 0) 
    {
      iDigits = iNo % 10;
      iRev = (iRev * 10) + iDigits;
      iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}

class program93
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    DigitX dobj = new DigitX();

    int iValue = 0;
    boolean bRet = false;   // false interannlay 0

    System.out.println("Enter number : ");
    iValue = sobj.nextInt();
    
    bRet = dobj.CheckPallindrome(iValue);

    if(bRet == true)
    {
      System.out.println("Number is pallindrome");
    }
    else
    {
      System.out.println("Number is pallindrome");
    }

  }
}