import java.util.*;

public class program183
{
  public static void Display(int iNO)
  {
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNO; iCnt++, ch++)
    { 
      System.out.print(ch+"\t");
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