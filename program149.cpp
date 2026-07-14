////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Dynamic Memory Allocation for Integer Array
//
//  Description :
//  Accepts the size of an array at runtime, dynamically allocates memory using 'new', stores user input, displays
//  the array elements, and releases the allocated memory using 'delete[]'.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;      // Pointer to dynamically allocated array
    int iLength = 0;      // Stores the size of the array
    int iCnt = 0;         // Loop counter

    // Accept the array size from the user
    cout << "Enter the number of elements : ";
    cin >> iLength;

    // Dynamically allocate memory for the array
    Brr = new int[iLength];

    // Accept array elements
    cout << "Enter the elements : " << endl;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin >> Brr[iCnt];
    }

    // Display array elements
    cout << "\nElements of the array are :" << endl;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout << Brr[iCnt] << endl;
    }

    // Release dynamically allocated memory
    delete []Brr;
    Brr = NULL;   // Avoid dangling pointer

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
  int *Brr = NULL;
  int iLength = 0, iCnt = 0;

  cout<<"Enter the number of elements : \n";
  cin>>iLength;

  Brr = new int[iLength];

  cout<<"Enter the elements : \n";

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    cin>>Brr[iCnt];
  }

  cout<<"Elements of the array are : \n";
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    cout<<Brr[iCnt]<<endl;
  }

  delete []Brr;

  return 0;
}
