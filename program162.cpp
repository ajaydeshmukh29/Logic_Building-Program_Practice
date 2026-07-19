///////////////////////////////////////////////
//
//  Array declairation inside class 
//
//////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
  public :
  int *Arr;
  int iSize;

  ArrayX(int X)
  {
    iSize = X;
    Arr = new int[iSize];
  }

  ~ArrayX()
  {
    delete []Arr;
  }
};

int main()
{
  ArrayX *aobj1 = new ArrayX(5);

  // Logic (function call)
  cout<<aobj1->iSize<<"\n";

  delete aobj1;
  return 0;
}
