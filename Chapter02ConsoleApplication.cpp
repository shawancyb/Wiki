// Chapter02ConsoleApplication.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//cout << "Please input your fist name: ";
	//string name;
	//cin >> name;

	////构造我们想要的信息
	//const string greeting = "Hello," + name + "!";
	////int length = greeting.size();
	//const string spaces(greeting.size(), ' ');
	//const string second = "*" + spaces + "*";
	//const string first(second.size(), '*');
	//const string third = "*" + greeting + "*";

	//cout << first << endl;
	//cout << second << endl;
	//cout << third << endl;
	//cout << second << endl;
	//cout << first << endl;
	{
		const string s = "a string";
		cout << s << endl;
	

		{
		const string s = "another string";
		cout << s << endl;
		};
	}
	system("pause");
	return 0;
}

