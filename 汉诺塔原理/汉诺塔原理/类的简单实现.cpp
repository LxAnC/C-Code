#include<iostream>
using namespace std;
class student {
public:
	int gcd(int i, int j);
	int bb(int i, int j);
private:
	int i;
	int j;
	int k;
};
int student::gcd(int i, int j)
{
	cout << "���е�gcd" << endl;
	if (i > j)
		return gcd(i - j, j);
	else if (i < j)
		return gcd(j - i, i);
	else
		return i;
}
int student::bb(int i, int j)
{
	int* p=&i, * b=&j;
	if (i > j)
		cout << "���е�bb" << endl;
	else
		cout << "���е�bb" << endl;
	return 1;
}
int main()
{
	int i, j;
	student p1;
	cin >> i >> j;
	p1.gcd(i, j);
	p1.bb(i, j);
	system("pause");
	return 1;

}