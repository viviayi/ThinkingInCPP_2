#include <string>
#include <iostream>
using namespace std;

int main(){
    string s("1234");
    // Runtime problem: goes beyond array bounds:
    cout << s[5] << endl;
    // saves you by throwing an exception:
    cout << s.at(5) << endl;
} ///:~
