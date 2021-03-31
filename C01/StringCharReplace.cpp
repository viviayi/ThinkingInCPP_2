#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s("aaaXaaaaXXXXXaaaaaaaa");
    cout << s << endl;
    replace(s.begin(), s.end(), 'X', 'Y');
    cout << s << endl;
} ///:~

/*
aaaXaaaaXXXXXaaaaaaaa
aaaYaaaaYYYYYaaaaaaaa
替换字符串中所有的X
使用的是STL中的replace函数，只作用于单个对象，在这里只能替换字母，不能作用于字符数组或字符串
*/
