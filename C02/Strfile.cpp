// Stream I/O with files
// The difference between get() & getline()
#include "../require.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    const int sz = 100; // Buffer size;
    char buf[sz];
    {
        ifstream in("Strfile.cpp"); // Read
        assure(in, "Strfile.cpp"); // Verify open
        ofstream out("Strfile.out"); // Write
        assure(out, "Strfile.out");
        int i = 1;

        // A less-convenient approach for line input:
        while(in.get(buf, sz)) { // Leaves \n in input  读到第一个空行为止
            in.get(); // Throw away next character(\n) 注释的话不能成功读到后面的内容，只能读到第一行
            cout << buf << endl; // Must add \n
            // File output just like standard I/O:
            out << i++ << ": " << buf << endl;
        }
    } // Destructors close in & out
    ifstream in("Strfile.out");
    assure(in, "Strfile.out");
    // More convenient line input:
    while(in.getline(buf, sz)){ // Removes \n
        char* cp = buf;
        while(*cp != ':')
            cp++;
        cp += 2; // Past ": "
        cout << cp << endl; // Must still add \n
    }
} ///:~
