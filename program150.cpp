#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    // Loop through the array and add all elements
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0, iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLenght;

    ///////////////////////////////////////////////////////////////////////
    // Dynamic Memory Allocation
    //
    // new keyword OS la request karto memory sathi.
    //
    // Example:
    // iLength = 5
    // Size of int = 4 bytes
    //
    // Required Memory = 5 * 4 = 20 bytes
    //
    // OS Heap madhye 20 bytes allocate karto
    // ani tyacha starting address Brr madhye store hoto.
    ///////////////////////////////////////////////////////////////////////

    Brr = new int[iLenght];

    cout<<"Enter the elements : \n";

    // Accept array elements from user
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of the array are : \n";

    // Display all elements
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    ///////////////////////////////////////////////////////////////////////
    // Function Call
    //
    // Brr is a pointer.
    // Full array pass hot nahi.
    //
    // Fakt array cha starting address (base address)
    // Summation function la pass hoto.
    //
    // iLength = array madhye kiti elements aahet te sangto.
    ///////////////////////////////////////////////////////////////////////

    iRet = Summation(Brr, iLenght);

    cout<<"Summation is : "<<iRet<<endl;

    ///////////////////////////////////////////////////////////////////////
    // Memory Deallocation
    //
    // Heap madhye allocate keleli memory manually free karavi lagte.
    //
    // delete[] means complete array delete kara.
    //
    // Jar delete[] lihila nahi tar memory Heap madhye occupied rahil.
    //
    // Ya problem la Memory Leak mhanatat.
    // [] sangte ki sagla array delete kara only single value nahi
    ///////////////////////////////////////////////////////////////////////

    delete []Brr;

    return 0;
}