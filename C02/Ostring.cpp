// Output strstreams
#include <iostream>
#include <strstream>
using namespace std;

int main(){
    const int sz = 100;
    cout << "type an int, a float and a string:";
    int i;
    float f;
    cin >> i >> f;
    cin >> ws; // Throw away white space
    char buf[sz];
    cin.getline(buf, sz); // Get reset of the line
    // (cin.rdbuf() would be awkward)
    ostrstream os(buf, sz, ios::app); // ios::app 是append标志，不覆盖
    os << endl;
    os << "integer = " << i << endl;
    os << "float = " << f << endl;
    os << ends;  // ostream需要手动插入结束符
    cout << buf;
    cout << os.rdbuf(); // same effect  os的get指针会移动到开头
    cout << os.rdbuf(); // Not the same effect  使得再次使用os.rdbuf()没有输出
} ///:~
