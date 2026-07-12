////////////////////////////////////////////////////////////////////////////////////////
//
//  Array application which accept the elements from user while program is compiling
//
/////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int Arr[], int iSize)  
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }
}

int main()
{
  int iLenght = 4;

  int Brr[iLenght];

  int iCnt = 0;

  printf("Enter the Elements : \n");

  for(iCnt = 0; iCnt < iLenght; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  Display(Brr,iLenght); 

  return 0;
}
