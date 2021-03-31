// Find a group of characters in a string
#include <string>
#include <iostream>
using namespace std;

int main(){
    string chooseOne("Eenie, meenie, miney, mo");
    int i = chooseOne.find("een");
    while(i != string::npos){
        cout << i << endl;
        i++;
        i = chooseOne.find("een", i);
    }
} ///:~

/*
8
跳过了Eenie，大小写问题
*/
