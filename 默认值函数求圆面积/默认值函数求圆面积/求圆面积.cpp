/*
����������Բ���.cpp
�����ܣ�����һ��Ĭ��ֵ������Բ���
����:lxc
���ڣ�2023.4.17
*/
#include<iostream>
using namespace std;
double Area(double r,double PI=3.14)
{
    return r * r * PI;
}
int main()
{
    double r;
    cout << "������Բ�İ뾶:" << endl;
    cin >> r;
    cout << "Բ�������:" << Area(r);
    return 0;
}