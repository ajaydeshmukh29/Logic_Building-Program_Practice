////////////////////////////////////////////////////////////////////////
//
//  Crate a Class named as ArrayX and havind the object aobj which 
//  show the size of ArrayX
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
  public:
    int *Arr;
    int iSize;
};

int main()
{
  ArrayX aobj;

  cout<<sizeof(aobj)<<endl; // 16 bytes

  return 0;
}
