// CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<int, char> PAIR1;
    //pair  g1;           //default
    //pair  g2(1, 'a');  //initialized,  different data type
    //pair  g3(1, 10);   //initialized,  same data type
    //pair  g4(g3);    //copy of g3
    //g2 = make_pair(1, 'a');
    //g2 = {1, 'a'};
    pair<string, double> PAIR2("Pair", 1.23);
    // if uninitialsed default value zero
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
    PAIR1.first = 100;
	PAIR1.second = 'G';
    cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;
    //pairs can be compared with >=,<=,!=,==
    //pair1.swap(pair2) ;
}
