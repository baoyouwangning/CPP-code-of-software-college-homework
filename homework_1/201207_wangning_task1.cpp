/*
    功能：求10个数中最大值最小值
    作者：wangning
    日期：2013-9-4
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void maxMinValue(int *arr,int n)
{
    int MAX = arr[0];
    int MIN = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > MAX)
        {
            MAX = arr[i];
        }
        if(arr[i] < MIN)
        {
            MIN = arr[i];
        }
    }

    cout << "Max is : "<< MAX << endl;
    cout << "Min is : "<< MIN << endl;

    return;
}

int main()
{
    int *a = (int *)malloc(sizeof(int) * 10);

    cout << "Please input 10 number:";
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9];
    maxMinValue(a,10);

    free(a);
    return 0;
}
