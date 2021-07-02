// Completely hidden file IO
#ifndef FULLWRAP_H
#define FULLWRAP_H

#include <cstdio>

class File{
    std::FILE* f;
    std::FILE* F(); // 使用文件指针前检查指针不为0，默认构造函数会将私有的文件指针置零
public:
    File(); // Create object but don't open file
    File(const char* path, const char* mode = "r");
    ~File();
    int open(const char* path, const char* mode = "r");
    int reopen(const char* path, const char* mode);
    int getc();
    int ungetc(int c);
    int putc(int c);
    int puts(const char* s);
    char* gets(char* s, int n);
    int printf(const char* format, ...); // 可变参数
    size_t read(void* ptr, size_t size, size_t n);
    size_t write(const void* ptr, size_t size, size_t n);
    int eof();
    int close();
    int flush();
    int seek();
    int getpos(fpos_t* pos);
    int setpos(const fpos_t* pos);
    long tell();
    void rewind();
    void setbuf(char* buf);
    int setvbuf(char* buf, int type, size_t sz);
    int error();
    void clearErr();
};

#endif // FULLWRAP_H ///:~
