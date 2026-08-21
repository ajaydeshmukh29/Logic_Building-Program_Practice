#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if(Arr[iCnt] == 11)
    {
      return true;          // Bad prorgramming
    }
  }
  return false;
}

int main()
{
  int *Brr = NULL;
  int iLenght = 0, iCnt = 0;
  bool bRet = false;

  printf("Enter the number of elements : \n");
  scanf("%d",&iLenght);

  Brr = (int *)malloc(sizeof(int) * iLenght);

  printf("Enter the elements : \n");

  for(iCnt = 0; iCnt < iLenght; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  bRet = LinearSearch(Brr,iLenght);

  if(bRet == true)
  {
    printf("Element is present\n");
  }
  else
  {
    printf("Elements is not present\n");
  }
  free(Brr);


  return 0;
}
