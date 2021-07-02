// Get directly into a streambuf
#include "../require.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream in("Sbufget.cpp");
    assure(in, "Sbufget.cpp");
    while(in.get(*cout.rdbuf()))
        in.ignore(); // 跳过'\n'
} ///:~
