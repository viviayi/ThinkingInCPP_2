// Testing class File
#include "FileClass.h"
#include "../require.h"
using namespace std;

int main(int argc, char* argv[]){
    requireArgs(argc, 1);
    FileClass f(argv[1]); // Open and tests
    const int bsize = 100;
    char buf[bsize];
    while(fgets(buf, bsize, f.fp()))
        puts(buf);
} // File automatically closed by destructor
///:~
