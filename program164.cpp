////////////////////////////////////////////////////////////////////////
//
//    Array is created using pointer to dynamically allocate memory
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
private:
    int *Arr;      // Pointer to dynamically allocated array
    int iSize;     // Size of the array

public:
    // Constructor
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
    // Dynamic object creation
    ArrayX *aobj1 = new ArrayX(5);

    // ============================================================
    // Demonstration of Encapsulation (Data Hiding)
    // Private members cannot be accessed directly outside the class.
    // The following statements will generate compile-time errors.
    // ============================================================

    // Error: 'iSize' is a private data member of class ArrayX
    // cout << aobj1->iSize << endl;

    // Error: Private data members cannot be modified directly
    // aobj1->iSize = 0;

    // Error: 'Arr' is a private data member of class ArrayX
    // aobj1->Arr = NULL;

    // Free dynamically allocated object
    delete aobj1;

    return 0;
}
