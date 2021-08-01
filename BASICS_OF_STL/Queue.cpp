//FIFO CONCEPT
#include <iostream>
#include<queue>

using namespace std;
int main() 
{
  
  queue<string> q;

  q.push("Charu");
  q.push("Wadhwa");
  q.push("B.Tech CSE");

  cout<<"Size before pop ->" <<q.size()<<endl;
  
  cout<<"First Element "<<q.front()<<endl;
  q.pop();
  cout<<"First Element "<<q.front()<<endl;

  cout<<"Size after pop ->" <<q.size()<<endl;

}

