#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    of << "Hello World\n";
    of2 << "Hello world 2";

    ifstream ifs;
    ifs.open("input.txt");
    int x;
    ifs>>x;
    cout << x; 
    ifs.close();
    of.close();
    of2.close();
    return 0;
}