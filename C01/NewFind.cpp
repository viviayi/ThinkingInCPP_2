// make Find.cpp perform a case insensitive search
#include <string>
#include <iostream>
using namespace std;

// Make an uppercase copy of s:
string upperCase(string& s){
    char* buf = new char[s.length()];
    s.copy(buf, s.length());
    for(int i = 0; i < s.length(); i++)
        buf[i] = toupper(buf[i]);
    string r(buf, s.length());
    delete buf;
    return r;
}

// Make a lowercase copy of s:
string lowerCase(string& s){
    char* buf = new char[s.length()];
    s.copy(buf, s.length());
    for(int i = 0; i < s.length(); i++)
        buf[i] = tolower(buf[i]);
    string r(buf, s.length());
    delete buf;
    return r;
}

int main(){
    string chooseOne("Eenie, meenie, miney, mo");
    cout << chooseOne << endl;
    cout << upperCase(chooseOne) << endl;
    cout << lowerCase(chooseOne) << endl;
    // Case sensitive search
    int i = chooseOne.find("een");
    while(i != string::npos){
        cout << i << endl;
        i++;
        i = chooseOne.find("een", i);
    }
    // Search lowercase:
    string lcase = lowerCase(chooseOne);
    cout << lcase << endl;
    i = lcase.find("een");
    while(i != lcase.npos){
        cout << i << endl;
        i++;
        i = lcase.find("een", i);
    }
    // Search uppercase:
    string ucase = upperCase(chooseOne);
    cout << ucase << endl;
    i = ucase.find("EEN");  // 大写字符串，查找的子串也要是大写的才行
    while(i != ucase.npos){
        cout << i << endl;
        i++;
        i = ucase.find("EEN", i);
    }
} ///:~
