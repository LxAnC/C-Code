#include<iostream>
using namespace std;
int main()
{
	//��ʼ��һά�����Լ���ά�����ע������͸�ʽ
	int* p = new int[5];
	//��ʼ��ʱͬʱ����ֵ
	int* p2 = new int(3);
	cout << *p2 << endl;
	//cout << "һά����Ĵ���" << endl;
	int(*p1)[3] = new int[1][3];
	//cout << "Ҫע���ʼ����ʱ��Ҫ������һ��" << endl;
	cout << sizeof(p);


}