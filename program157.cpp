#include<iostream>
using namespace std;

class ArrayX
{
  public:
  int *Arr;
  int iSize;

  // Default Constructor
  ArrayX()
  {

  }

  // Parameterized constructor
  ArrayX(int x)
  {

  }
};

int main()
{
  ArrayX aobj1;   // Default
  ArrayX aobj2;   // Parameterized

  cout<<sizeof(aobj1)<<endl;
  return 0;
}