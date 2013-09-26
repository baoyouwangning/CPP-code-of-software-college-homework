/*************************************************************************
	> File Name: 201207_wangning_task3.cpp
	> Function: Contacts
	> Author: wangning
	> Mail: 201207wangning@edu2act.org
	> Created Time: 2013年09月26日 星期四 14时40分43秒
 ************************************************************************/
#include <iostream>
#include <string>

#define ContactsSize 10

using namespace std;

class Contacts
{
public:
	void setPerson(string aName,string aNumb)
	{
		person_Name = aName;
		person_Numb = aNumb;
	}
	string getName()
	{	
		string a = person_Name;
		return person_Name;
	}
	string getNumb()
	{
		return person_Numb;
	}
private:
	string person_Name;
	string person_Numb;
};

int main(void)
{	
	int personCout;
	char choice;
	string tempName;
	string tempNumb;
	Contacts *personArray = new Contacts[ContactsSize];
	int personArrayLength = 0;

	while(1)
	{	
		cout << endl << endl;
		cout << "        ==============欢迎使用通讯录管理系统V0.0.1===============" << endl;
		cout << "        -                 A:添加新联系人                        -" << endl;
		cout << "        -                 P:浏览联系人                          -" << endl;
		cout << "        -                 H:查找联系人                          -" << endl;
		cout << "        -                 Q:退出                                -" << endl;
		cout << "        =========================================================" << endl << endl;
		cout << " ^_^ 请选择：";

		cin >> choice;
		fflush(stdin);

		if('A' == choice)
		{
			cout << "请输入此次要添加联系人的个数：";
			cin >> personCout;
			fflush(stdin);

			if(personArrayLength + personCout > ContactsSize)
		
			{
				cout << "通讯录管理系统V0.0.1只能添加10个联系人！" << endl;

				system("pause");
				system("cls");
				continue;
			}
			int i = personArrayLength;
			for(int j = 0; i < ContactsSize && j < personCout; i++, j++)
			{
				cout << "请依次输入第" << i+1 << "个人的‘姓名+电话'(以空格隔开)：";
				cin >> tempName >> tempNumb;
				fflush(stdin);
				personArray[i].setPerson(tempName,tempNumb);
			}
			personArrayLength += personCout;
			cout << "Add Successful!" << endl;
			system("pause");
			system("cls");
		}
			
		else if('P' == choice)
		{
			cout << "NAME  PHONE " << endl;
			if(personArrayLength == 0)
			{
				cout << "No Contacts! Please add!" << endl;

				system("pause");
				system("cls");
				continue;
			}
			for(int i = 0; i < personArrayLength; i++)
			{
				cout << personArray[i].getName() << "  " << personArray[i].getNumb() << endl;
			}

			system("pause");
			system("cls");
		}
		else if('H' == choice)
		{
			string scan;
			int flag = 0;

			cout << "请输入查找信息：";
			cin >> scan;
			fflush(stdin);

			cout << "NAME   PHONE" << endl << endl;
			for(int i = 0; i < personArrayLength; i++)
			{
				if( personArray[i].getName() == scan || personArray[i].getNumb() == scan )
				{	
					cout << personArray[i].getName() << "  " << personArray[i].getNumb() << endl;
					flag = 1;
				}
			}
			if(0 == flag)
			{
				cout << "Not find!" << endl;
			}
			system("pause");
			system("cls");
		}
		else if('Q' == choice)
		{
			return 0;
		}
	}

	system("pause");
	return 0;
}