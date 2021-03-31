// Reverse the order of words in a string
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // The ';' characters will be delimiters
    string s("now.;sense;make;to;going;is;This");
    cout << s << endl;
    // To store the words:
    vector<string> strings;
    // The last element of the string:
    int last = s.size();
    // The beginning of the current word:
    int current = s.rfind(';');
    // Walk backward through the string:
    while(current != string::npos){
        // Push each word into the vector.
        // Current is incremented before copying to 
        // avoid copying the delimiter.
        strings.push_back(s.substr(++current, last - current));
        // Back over the delimiter we just found, and set last to the end of the next word
        current -= 2; // 这里是因为current在上面+1，然后要移动到分号前一位，所以还要-1，一起-2
        last = current;
        // Find the next delimiter
        current = s.rfind(';', current);
    }
    // cout << current << endl; // 循环结束时，current 值为-1
    // Pick up the first word - it's not preceded by a delimiter
    strings.push_back(s.substr(0, last - current));
    // Print them in the new order:
    for(int j = 0; j < strings.size(); j++)
        cout << strings[j] << " ";
} ///:~
