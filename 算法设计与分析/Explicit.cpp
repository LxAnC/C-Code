#include <iostream>
using namespace std;
class A
{
public:
    A(int i = 5)
    {
        m_a = i;
    }
private:
    int m_a;
};

int main()
{
    A s;
    //���ǻᷢ��,����û������'='�����,����ȥ���԰����õ�int���͸�ֵ���˶���A.
    s = 10;
    //ʵ����,10����ʽת�������������ʽ,���Բ�������.
    //s = A temp(10);
    system("pause");
    return 0;
}