#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
	void login();//��¼����
	void ReserveRoom();//ԤԼ����

private:
	char m_Sid[64];//ѧ��
	char m_PassWord[64];//����
	bool m_isreserve = 0;//�Ƿ�����ԤԼ
};
class Admin
{
public:
	void login();//��¼����
	void SetPassword();//��������
private:
	char m_Name[64];
	char m_PassWord[64];
	int Room[1024];
};