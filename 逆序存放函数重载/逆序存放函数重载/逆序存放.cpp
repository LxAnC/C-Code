/*
������:������.cpp
���ܣ����ú������ص�����дһ���ܹ�ʵ������������ַ�����
������
���ߣ�lxc
���ڣ�2023.4.17
*/
#include<iostream>
using namespace std;
void sort(int a[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		int t = a[i];
		a[i] = a[9 - i];
		a[9 - i] = t;
	}
}
void sort(char ch[])
{
	int i;
	for (i = 0; i < strlen(ch) / 2; i++)
	{
		int t = ch[i];
		ch[i] = ch[strlen(ch) - 1 - i];
		ch[strlen(ch) - 1 - i] =t;
	}
}
int main()
{
	int i, j, a[10];
	char ch[81];
	cout << "����һ���ַ���:" << endl;	
	gets_s(ch);
	cout << "������ʮ����:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	sort(a);
	sort(ch);
	cout << "����洢��Ľ��Ϊ:" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	puts(ch);
	return 0;
}