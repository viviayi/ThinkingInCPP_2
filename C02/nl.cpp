// Creating a manipulator
#include <iostream>
using namespace std;

ostream& nl(ostream& os){
    return os << '\n';
}

int main(){
    cout << "newlines" << nl << "between" << nl << "each" << nl << "word" << nl;
} ///:~
