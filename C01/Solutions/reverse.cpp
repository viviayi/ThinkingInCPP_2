// Reverse a string line
#include <string>
#include <iostream>
using namespace std;

string ReverseString(string s){
    string out_s;
    string::reverse_iterator p = s.rbegin();
    while(p != s.rend())
    {
        out_s.push_back(*p);
        p++;
    }
    return out_s;
}

int main(){
    cout << ReverseString("987654321");
}
