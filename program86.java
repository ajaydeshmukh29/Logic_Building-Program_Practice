import java.util.*;

class DigitX
{
  public int CountEvenDigits(int iNo)
  {
    int iDigits = 0;
    int iCount = 0;

    
    while (iNo != 0) 
    {
      iDigits = iNo % 10;
      
      iNo = iNo / 10;

      if(iDigits % 2 == 0)
      {
        iCount++;
      }
    }
    return iCount;
  }
}

class program86
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    DigitX dobj = new DigitX();

    int iValue = 0;
    int iRet = 0;

    System.out.println("Enter number : ");
    iValue = sobj.nextInt();
    
    iRet = dobj.CountEvenDigits(iValue);

    System.out.println("Number of even digits are : "+iRet);
  }
}