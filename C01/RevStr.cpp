// Print a string in reverse
#include <string>
#include <iostream>
using namespace std;
int main(){
    string s("987654321");
    // Use this iterator to walk backwards:
    string::reverse_iterator rev;
    // "Incrementing" the reverse iterator moves it to successively lower string elements:
    for(rev = s.rbegin(); rev != s.rend(); rev++)
        cout << *rev << " ";
} ///:~


// The compiler won't accept this
// string sBackwards(s.rbegin(), s.rend());
// 也可以就用const_iterator从end--，但是结束条件不能用!=s.begin()
