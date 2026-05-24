// Input : 5
// Output : 1 2 3 4 

#include<stdio.h>

void Display(int iNO)
{
  int iCnt = 0;

  for(iCnt = iNO; iCnt >= 1; iCnt--)
  {
    printf("%d\t",iCnt);
  }
  printf("\n");
}

int main()
{

  int iValue = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  Display(iValue);
  return 0;
}