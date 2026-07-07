#include<stdio.h>
#include<string.h>


int main()
{
  char str[] = "Jay Ganesh";
  int iRet = 0;

  iRet = strlen(str);                   // strlen is a function and sizeof is operator

  printf("Lenght of string is : %d\n",strlen(str));

  iRet = sizeof(str);

  printf("Size of string is : %d\n",iRet);

  return 0;
}