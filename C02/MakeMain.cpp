// Create a shell main() file
#include "../require.h"
#include <fstream>
#include <strstream>
#include <cstring>
#include <cctype>
using namespace std;
int main(int argc, char* argv[]) {
    requireArgs(argc, 1);
    ofstream mainfile(argv[1]);
    assure(mainfile, argv[1]);
    istrstream name(argv[1]);
    ostrstream CAPname;
    char c;
    while(name.get(c))
        CAPname << char(toupper(c));
    CAPname << ends;
    mainfile << "//" << ": " << CAPname.rdbuf()
        << " -- " << endl
        << "#include <iostream>" << endl
        << endl
        << "main() {" << endl << endl
        << "}" << endl;
} ///:~
