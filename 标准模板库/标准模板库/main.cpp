#include"head.h"
template<class T>
T max(T a, T b) {
	if (a > b)
		return a;
	return b;
}
template<class T>
T min(T a, T b) {
	if (a < b)
		return a;
	return b;
}
int main() {
	int a = 2, b = 3;
	float x = 5.8, y = 9.99;
	cout<<"���¶Ժ���ģ��ĳ�����������֤"<<endl;
	cout << "������Ϊ: " << x << " �� " << y << endl;
	cout <<"���ֵΪ:" << setw(4) << max(x,y) << endl;//floatʵ�Ͳ���
	cout <<"��СֵΪ:" << setw(4) << min(x,y) << endl;//floatʵ�Ͳ���
	cout << "*****************************************" << endl;
	cout << "������Ϊ: " << a << " �� " << b << endl;
	cout <<"���ֵΪ:" <<setw(4)<< max(a,b) << endl;//int���Ͳ���
	cout <<"��СֵΪ:" << setw(4) << min(a,b) << endl;//����min����
	system("pause");
	return 0;
}