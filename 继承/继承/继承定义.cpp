#include<iostream>
using namespace std;
class Base {
public:
	int a;
	int b;
	int sum() {
		cout << "sum���������У�" << endl;
	}
protected:
	int c;
private:
	int x;
	int y;
};
class Son :public Base {
public:
	int a, b, c;
	void c() {
		cout << "��Ԫ��" << endl;
	}
};
void test() {
	Son s;
	s.sum();
	s.c();
}
int main() {
	
}