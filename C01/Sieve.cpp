#include <string>
#include <iostream>
using namespace std;

int main(){
    // Create a 50 char string and set each element to 'P' for Prime
    string sieveChars(50, 'P');
    // By definition neither 0 nor 1 is prime.
    // Change these elements to "N" for Not Prime.
    sieveChars.replace(0, 2, "NN");
    // Walk through the array:
    // 2-25能作为因数的都置为N了，剩下的质数置为P
    for(int i = 2; i <= (sieveChars.size() / 2); i++)
        for(int factor = 2; factor * i < sieveChars.size(); factor++)
            sieveChars[factor * i] = 'N';
    cout << "Prime:" << endl;
    // Return the index of the first 'P' element:
    int j = sieveChars.find('P');
    // While not at the end of the string
    while(j != sieveChars.npos){
        // If the element is P, the index is a prime
        cout << j << " ";
        // Move past the last prime
        j++;
        // Find the next prime
        j = sieveChars.find('P', j); // 第二个参数为查找的起始位
    }
    cout << "\n Not prime:" << endl;
    // Find the first element value not equal P:
    j = sieveChars.find_first_not_of('P');
    while(j != sieveChars.npos){
        cout << j << " ";
        j++;
        j = sieveChars.find_first_not_of('P', j);
    }
} ///:~

/*
Prime:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
 Not prime:
0 1 4 6 8 9 10 12 14 15 16 18 20 21 22 24 25 26 27 28 30 32 33 34 35 36 38 39 40 42 44 45 46 48 49
*/
