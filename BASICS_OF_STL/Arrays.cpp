#include <iostream>
#include<array> //library for array
using namespace std;
int main() 
{
  
  int basic[3] ={1,2,3}; // basic array

  array<int,4> a = {1,2,3,4}; //stl array

  int size = a.size();

  for(int i=0;i<size;i++)
  { 
    cout<<a[i]<<endl;  //O(1) OPERATION
  }

  cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;
  cout<<"Empty or not-> "<<a.empty()<<endl; // 0 if not empty
  cout<<"First Element-> "<<a.front()<<endl; // first element
  cout<<"last Element-> "<<a.back()<<endl; //last element

}

