// Demostrates compare(), swap()
#include <string>
#include <iostream>
using namespace std;

int main(){
    string first("This");
    string second("That");
    // Which is lexically greater?
    switch(first.compare(second)){
        case 0:// The same
            cout << first << " and " << second << " are lexically equal" << endl;
            break;
        case -1: // Less than 
            first.swap(second);
            // Fall through this case
        case 1:
            cout << first << " is lexically greater than " << second << endl;
    }
} ///:~
