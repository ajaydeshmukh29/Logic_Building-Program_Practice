////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which calculate the sizeof Arr[] array.
//
//  Reading:
//  Arr is a one-dimentional array which contains 7 elements.Each element is of type integer.
//
//  Calculation: 
//  sizeof(Arr) = sizeof(data type int) * Number of elements(7)
//              = 28 bytes
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
  int Arr[7] = {10,20,30,40,50};

  printf("%d\n",sizeof(Arr)); //28

  return 0;
}
