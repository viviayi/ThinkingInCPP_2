// Find a word is palindrome or not
#include <string>
#include <iostream>
using namespace std;

bool IsPalindrome(string s){
    bool is_palindrome = true;
    string::const_iterator p1 = s.begin();
    string::reverse_iterator p2 = s.rbegin();
    while(p1 != s.end()){
        if(toupper(*p1) == toupper(*p2)){
            p1++;
            p2++;
        }
        else{
            return false;
        }
    }
    return is_palindrome;
}

int main(){
    cout << IsPalindrome("Wow") << endl;
}
