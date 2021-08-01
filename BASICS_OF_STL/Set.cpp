#include <iostream>
#include<set>
// bst behind the scene
using namespace std;
int main() 
{

  // O(logn)-> insert,find,erase,count
  //set<int> s(a,a+n);
  //set<int> s(v.begin(),v.end());
  set<int> s; //in sorted order
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(0);

  for(auto i : s) 
  {
  cout<<i<<endl;
  }
  cout<<endl;

  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for(auto i : s) 
  {
    cout<<i<<endl;
  }
  cout<<endl;
  cout<<"-5 is present or not -> "<<s.count(-5)<<endl;

  set<int>::iterator itr = s.find(5);

  for(auto it=itr;it!=s.end();it++) 
  {
  cout<<*it<<" ";
  }
  cout<<endl;

}
 

