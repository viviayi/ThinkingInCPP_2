#include <string>
using namespace std;

int main(){
    string imBlank;  // 创建不初始化
    string heyMom("Where are my socks?"); // 使用字符串创建，调用构造函数
    string standardReply = "Beamed into deep space on wide angle dispersion?"; // 使用字符串赋值创建
    string useThisOneAgain(standardReply); // 使用已存在的对象创建，拷贝构造
} ///:~
