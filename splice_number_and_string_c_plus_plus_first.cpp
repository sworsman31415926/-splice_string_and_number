#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int a = 2;
    string b = "abc";
    stringstream ss;
    ss << a << b;
    cout << ss.str() << endl;
    return 0;
}