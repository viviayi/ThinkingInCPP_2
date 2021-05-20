// Delete carriage return character(0x0d) from a line
#include <string>
#include <iostream>
using namespace std;

string DelCar(string& s){
    size_t found = s.find("0x0d");
    if(found != string::npos){
        s = s.substr(0, found) + s.substr(found+string("0x0d").size(), s.size());   
    }
    return s;
}

int main(){
    string s1 = "It is a test.0x0d This is the new line.";
    cout << DelCar(s1);
}
