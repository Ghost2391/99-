// 99乘法表.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
using namespace std;
int main()

{
	int i, j;
	for (i = 1; i <= 9; i++) //i为行数
	{
		for (j = 1; j <= i; j++)
			cout << j << "*" << i << "=" << j*i << "\t";
		cout << endl;
	}
    return 0;
}

