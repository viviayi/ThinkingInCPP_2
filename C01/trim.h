// Use find_first_of() and find_last_of() to creat a little utility that will strip whitespace characters off of both ends of a string
#ifndef TRIM_H
#define TRIM_H
#include <string>
// General tool to strip spaces from both ends:
inline std::string trim(const std::string& s){
    if(s.length() == 0)
        return s;
    int b = s.find_first_not_of(" \t");
    int e = s.find_last_not_of(" \t");
    if( b == -1) // No non-spaces
        return "";
    return std::string(s, b, e-b+1);
}
#endif // TRIM_H ///:~
