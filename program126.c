#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
  int iCount = 0, iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if (Arr[iCnt] % 2 != 0)
    {
      iCount++;
    }
  }
  return iCount;
}

int main()
{
  int *Brr = NULL;
  int iLenght = 0, iCnt = 0, iRet = 0;

  printf("Enter the number of elements : \n");
  scanf("%d",&iLenght);

  Brr = (int * )malloc(sizeof(int) * iLenght);

  printf("Enter the elements : \n");

  for(iCnt = 0; iCnt < iLenght; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  iRet = CountOdd(Brr,iLenght);

  printf("Odd elements are : %d\n",iRet);

  free(Brr);

  return 0;
}