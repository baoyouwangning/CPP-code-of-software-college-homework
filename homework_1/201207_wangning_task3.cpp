/*
    功能：内存空间管理
    作者：wangning
    日期：2013-9-6
*/
#include <iostream>

using namespace std;

int main(void)
{
    int i;
    int num;
    string *str = NULL;

    cout << "请输入字符串个数" << endl;
    cin >> num;
    str = new string[num];

    cout << "请输入n个字符串" << endl;
    for(i = 0; i < num; i++)
    {
        cin >> str[i];
    }
    cout << "输入完毕" << endl;

    cout << "现在反序输出" << endl;
    for(i = num - 1; i >= 0; i--)
    {
        cout << str[i] << endl;
    }

    delete[] str;
    return 0;
}
