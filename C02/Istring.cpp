// Input strstreams
#include <iostream>
#include <strstream>   // 相比stringstreams更老版
using namespace std;

int main(){
    istrstream s("47 1.414 This is a test");
    int i;
    float f;
    s >> i >> f; // Whitespace-delimited input
    char buf2[100];
    s >> buf2;
    cout << "i = " << i << ", f = " << f;  // 47对应整形变量读入，如果输入1.414在前面，则会读入1，f将读入0.414
    cout << " buf2 = " << buf2 << endl;
    cout << s.rdbuf(); // Get the rest ...
} ///:~
