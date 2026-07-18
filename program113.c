////////////////////////////////////////////////////////
//
//  Array Brr of size 16 bytes which stores 4 elements
//  and logic define outside the main function   
//
///////////////////////////////////////////////////////
#include<stdio.h>

void Display(int Arr[])  
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < 8; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }
}

int main()
{
  int Brr[4] = {10,20,30,40};

  Display(Brr);

  return 0;
}
