// Reading & writing one file
#include "../require.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in("Iofile.cpp");
    assure(in, "Iofile.cpp");
    ofstream out("Iofile.out");
    assure(out, "Iofile.out");
    out << in.rdbuf(); // Copy file
    in.close();
    out.close();
    // Open for reading and writing:
    ifstream in2("Iofile.out", ios::in | ios::out);
    assure(in2, "Iofile.out");
    ostream out2(in2.rdbuf());
    cout << in2.rdbuf(); // Print whole file
    out2 << "Where does this end up?";
    out2.seekp(0, ios::beg); // 指向文件开头
    out2 << "And what about this?"; // 在开头写入，覆盖了已写入的信息
    in2.seekg(0, ios::beg);
    cout << in2.rdbuf();
} ///:~
