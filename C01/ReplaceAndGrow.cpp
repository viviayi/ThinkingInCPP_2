#include <string>
#include <iostream>
using  namespace std;

int main(){
    string bigNews = "I thought I saw Elvis in a UFO. I have been working too hard.";
    string replacement("wig");
    // The first arg says "replace chars beyond the end of the existing string":
    bigNews.replace(bigNews.size(), replacement.size(), replacement);
    cout << bigNews << endl;
} ///:~

/*
I thought I saw Elvis in a UFO. I have been working too hard.wig
超出字符串，在字符串结尾扩展
*/
