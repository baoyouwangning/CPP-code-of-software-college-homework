/*
    功能：名字命名空间
    作者：wangning
    日期：2013-9-6
*/
#include <iostream>

using namespace std;

namespace equalSting
{
    bool isEqual(const char *str1, const char *str2)
    {
        while(*str1 && *str2 && *str1++ == *str2++);
        return !(*--str1 - *--str2);
    }
}

namespace equalInt
{
    bool isEqual(int num1, int num2)
    {
        return num1 == num2;
    }
}

int main(void)
{
    char *p = "abc";
    char *q = "abc";

    bool boo = equalSting::isEqual(p,q);
    cout << boo << endl;
    p = "abd";
    q = "abc";
    boo = equalSting::isEqual(p,q);
    cout << boo << endl;
    int x = 2, y = 2;
    boo = equalInt::isEqual(x,y);
    cout << boo << endl;
    return 0;
}
