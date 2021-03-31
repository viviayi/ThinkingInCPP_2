#include <string>
#include <iostream>
using namespace std;

int main(){
    string source("xxx");
    string s(source.begin(), source.end()); // 使用迭代器初始化字符串
    cout << s << endl;
}
