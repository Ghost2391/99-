// 99�˷���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<iostream>
using namespace std;
int main()

{
	int i, j;
	for (i = 1; i <= 9; i++) //iΪ����
	{
		for (j = 1; j <= i; j++)
			cout << j << "*" << i << "=" << j*i << "\t";
		cout << endl;
	}
    return 0;
}

