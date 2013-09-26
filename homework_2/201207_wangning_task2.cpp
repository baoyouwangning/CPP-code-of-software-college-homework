/*************************************************************************
	> File Name: 201207_wangning_task2.cpp
	> Function: swap two number
	> Author: wangning
	> Mail: 201207wangning@edu2act.org
	> Created Time: 2013年09月26日 星期四 14时40分43秒
 ************************************************************************/
#include <iostream>

typedef int type;

using namespace std;

void swap(type *num1,type &num2)
{
	type temp;
	temp = *num1;
	*num1 = num2;
	num2 = temp;
}

int main(void)
{
	type a = 1;
	type b = 2;

	cout << "未交换前" << "a=" << a << "b=" << b << endl;
	
	swap(&a,b);

	cout << "交换后" << "a=" << a << "b=" << b << endl;

	system("pause");
	return 0;
}