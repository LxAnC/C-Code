/*
���������������ж�.cpp
�����ܣ��ж���������֮������Щ��������
���ߣ�lxc
���ڣ�2023.4.17
*/
#include<iostream>
using namespace std;
int su(int x)
{
	int i;
	for (i = 2; i <= x / 2; i++)
	  if (x % i == 0)
		  break;
	if (i <= x / 2)
		return 0;
	else
		return 1;
}
int main()
{
	int a, b, c;
	cout << "������������;" << endl;
	cin >> a >> b;
	cout << "�������֮�������" << endl;
	if (a > b)
	{
		int t = a; a = b; b = t;
	}
	while(a<=b)
	{
		if (su(a) == 1)
			cout << a << " ";
		a++;
	}
	return 0;
}