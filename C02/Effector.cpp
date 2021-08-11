// Jerry Schwarz's "effectors"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <climits> // ULONG_MAX
using namespace std;

// Put out a portion of a string:
class Fixw{
    string str;
public:
    Fixw(const string& s, int width) : str(s, 0, width) {}
    friend ostream& operator<<(ostream& os, Fixw& fw){
        return os << fw.str;
    }
};

typedef unsigned long ulong;

// Print a number in binary:
class Bin
{
    ulong n;
public:
    Bin(ulong nn) { n = nn; }
    friend ostream& operator<<(ostream&, Bin&);
};

ostream& operator<<(ostream& os, Bin& b){
    ulong bit = ~(ULONG_MAX >> 1); // Top bit set
    while(bit) {
        os << (b.n & bit ? '1' : '0');
        bit >>= 1;
    }
    return os;
}

int main(){
    char* my_string = "Things that make us happy, make us wise";
    for(int i = 1; i <= strlen(my_string); i++)
    {
        Fixw tmp = Fixw(my_string, i);
        cout << tmp << endl;
    }
    ulong x = 0xCAFEBABEUL;
    ulong y = 0x76543210UL;
    Bin b_x = Bin(x);
    Bin b_y = Bin(y);
    cout << "x in binary: " << b_x << endl;
    cout << "y in binary: " << b_y << endl;
} ///:~
