// ConsoleApplication.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	if (sizeof(void *)==4)
	{
		cout << "32 bit program" << endl;
	}
	else if (sizeof(void *) == 8){
		cout << "64 bit program" << endl;
	}

	cout << sizeof( double) << endl;
	return 0;
}

