#include "trim.h"
#include <iostream>
using namespace std;

string s[] = {
    " \t abcdefghijklmnop \t ",
    "abcdefghijklmnop \t ",
    " \t abcdefghijklmnop",
    "a", "ab", "abc", "a b c",
    " \t a b c \t ", " \t a \t b \t c \t ",
    "", // Must also test the empty string
};

void test(string s){
    cout << "[" << trim(s) << "]" << endl;
}

int main(){
    for(int i = 0; i < sizeof(s)/sizeof(*s); i++)
        test(s[i]);
} ///:~
