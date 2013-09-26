/*************************************************************************
	> File Name: 201207_wangning_task1.cpp
	> Function: test Overload
	> Author: wangning
	> Mail: 201207wangning@edu2act.org
	> Created Time: 2013年09月26日 星期四 14时40分43秒
 ************************************************************************/

#include <iostream>

using namespace std;

int Squares(int a=1,int b=2)
{
	return pow(a,2.0)+pow(b,2.0);
}

float Squares(float a,float b)
{
	return pow(a,2)+pow(b,2);
}

double Squares(double a,double b)
{
	return pow(a,2)+pow(b,2);
}

int main(void)
{
	cout << "Squares()=" << Squares() << endl;
	cout << "Squares(10,20)" << Squares(10,20) << endl;
	cout << "Squares(2.5F,2.5F)" << Squares(2.5F,2.5F) << endl;
	cout << "Squares(2.5,2.5)" << Squares(2.5,2.5) << endl; 

	system("pause");
	return 0;
}