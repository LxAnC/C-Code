#include"student.h"
#include<iostream>
using namespace std;
StudentInfo::StudentInfo() {
	cout << "������ѧ������,ѧ��ѧ��,רҵ��" << endl;
	cin >> name;
	cin >> id;
	cin >> sname;
}
StudentInfo::~StudentInfo() {
	cout<<"���������ѵ���"<<endl;
}
void Grades::show() {
	cout << "------------------------" << endl;
	cout << "����:" << name << endl;
	cout << "ѧ��:" << id << endl;
	cout << "רҵ:" << sname << endl;
	cout << "------------------------" << endl;
}
Grades::Grades() {
	cout << "������ѧ����Ŀ�ĳɼ���" << endl;
	cin >> s1>>s2>>s3>>s4>>s5>>s6;

}
