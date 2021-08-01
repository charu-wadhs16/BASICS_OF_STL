//LIFO CONCEPT
#include <iostream>
#include<stack>

using namespace std;
int main() 
{
  stack<string> s;

  s.push("Charu");
  s.push("Wadhwa");
  s.push("B.Tech CSE");

  cout<<"Top Element-> "<<s.top()<<endl;

  s.pop();
  cout<<"Top Element-> "<<s.top()<<endl;

  cout<<"size of stack ->"<<s.size()<<endl;

  cout<<"Empty or not "<<s.empty()<<endl;

}




