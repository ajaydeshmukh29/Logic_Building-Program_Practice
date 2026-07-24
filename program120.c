//////////////////////////////////////////////////////////////////////////////////
//
//  Take elements from user and allocate the memroy for that element at runtime
//  use that allocated memroy after use delete of free that memroy.
//
//  Steps :  Step 1 : Accept the number elements 
//  Step 2 : Allocate the memory  
//  Step 3 : Accept the value form user 
//  Step 4 : Use the memory
//  Step 5 : Deallocate the memory
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *Brr = NULL;
  int iLength = 0, iCnt = 0;

  // Step 1 : Accept the number elements
  printf("Number of elements : \n");
  scanf("%d",&iLength);

  // Step 2 : Allocate the memory 
  Brr = (int *)malloc(iLength * sizeof(int));

  // Step 3 : Accept the value form user

  printf("Enter the element : \n");
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  // Step 4 : Use the memory (LOGIC)

  // Step 5 : Deallocate the memory
  free(Brr);

  return 0;
}
