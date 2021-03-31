#include <string>
using namespace std;

int main(){
    // Error: no single char inits
    string nothingDoing1('a');
    // Error: no integer inits
    string nothingDoing2(0x37);
} ///:~
