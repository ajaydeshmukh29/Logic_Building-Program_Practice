#include<iostream>
using namespace std;

#pragma pack(1)

///////////////////////////////////////////////////////////////
//
//  Title : Constructor Overloading in C++
//
//  Description :
//  Demonstrates the use of Default Constructor and
//  Parameterized Constructor for dynamic array allocation.
//
///////////////////////////////////////////////////////////////

class ArrayX
{
private:
    int *Arr;          // Pointer to dynamically allocated array
    int iSize;         // Stores the size of the array

public:

    // Default Constructor
    ArrayX()
    {
        iSize = 5;
        Arr = new int[iSize];
    }

    // Parameterized Constructor
    ArrayX(int X)
    {
        iSize = X;
        Arr = new int[iSize];
    }

    // Destructor
    ~ArrayX()
    {
        delete []Arr;
    }
};

int main()
{
    // Calls the Default Constructor
    ArrayX *aobj1 = new ArrayX();

    // Calls the Parameterized Constructor
    ArrayX *aobj2 = new ArrayX(5);

    // Function calls can be performed here

    // Release dynamically allocated memory
    delete aobj1;
    delete aobj2;

    return 0;
}
