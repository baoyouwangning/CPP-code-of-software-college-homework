/*
    功能：数组的简单操作
    作者：wangning
    日期：2013-9-6
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int check(int *numArray,int checkNum,int sum,int len)
{
    for(int i = 0; i < len; i++)
    {
        if(numArray[i] == checkNum)
        {
            sum += 1;
        }
    }
    return sum;
}

int main()
{
    int i;
    int *numArray = (int *)malloc(sizeof(int) * 10);

    cout << "现在输入这十个数，注意要递增" << endl;
    for(i = 0; i < 10; i++)
    {
        cin >> numArray[i];
    }

    for(i = 0; i < 10; i++)
    {
       cout << numArray[i] << "出现" << check(numArray,numArray[i],0,10) << "次"  << endl;
    }

    system("pause");
    return 0;
}
