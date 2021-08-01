#include <iostream>
#include<vector> //library
using namespace std;
int main() 
{
  
  vector<int> v; //dynamic array
  vector<int> v1(5);
  vector<int> a(5,1);
  fill(v1.begin(),v1.end(),5);
  vector<int> last(a);
  vector<int> vect1{ 10, 20, 30 };
  int arr[] = { 10, 20, 30 };
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> vect(arr, arr + n);
  for(int i:v1) 
  {
  cout<<i<<" ";
  }
  cout<<endl;
  cout<<"print last"<<endl;
  for(int i:last) 
  {
  cout<<i<<" ";
  }
  cout<<endl;
  
  cout<<"Capacity-> "<<v.capacity()<<endl;

  v.push_back(1);
  cout<<"Capacity-> "<<v.capacity()<<endl;

  v.push_back(2);
  cout<<"Capacity-> "<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Capacity-> "<<v.capacity()<<endl; //space
  cout<<"Size-> "<<v.size()<<endl;  // number of elments

  cout<<"Elemetn at 2nd Index" <<v.at(2)<<endl;

  cout<<"front " <<v.front()<<endl;
  cout<<"back " <<v.back()<<endl;

  cout<<"before pop"<<endl;
  for(int i:v) 
  {
    cout<<i<<" ";
  }
  cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v) 
  {
    cout<<i<<" ";
  }

  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;

}
