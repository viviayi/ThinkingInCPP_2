#include <string>
#include <iostream>
using namespace std;

int main(){
    //Strings to compare
    string s1("This ");
    string s2("That ");
    for(int i = 0; i < s1.size() && i < s2.size(); i++){
        // See if the string elements are the same:
        if(s1[i] == s2[i])
            cout << s1[i] << " " << i << endl;
    }
    if (s1 != s2) {
        cout << "Strings aren't same:" << " ";
        if(s1 > s2)
            cout << "s1  is > s2" << endl;
        else
            cout << "s2 is > s1" << endl;
    }
} ///:~
