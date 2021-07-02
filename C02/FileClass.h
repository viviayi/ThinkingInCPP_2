// Stdio files wrapped
#ifndef FILECLAS_H
#define FILECLAS_H
#include <cstdio>
class FileClass{
    std::FILE* f;
public:
    FileClass(const char* fname, const char* mode = "r");
    ~FileClass();
    std::FILE* fp();
};
#endif // FILECLAS_H
