#include"system.h"
int Login()
{
	int i;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "       ******************************************************         " << endl;
	cout << "       **********************����ԤԼϵͳ********************         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ***                   ���ߣ�LxAnC                  ***         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ***                 ��ѡ�����¼�ķ�ʽ             ***         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ***                 1.ѧ��     2.����Ա            ***         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ******************************************************         " << endl;
	cout << "       ******************************************************         " << endl;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "����������û����ͣ�" << endl;
	cin >> i;
	return i;
}
void Begin()
{
	Login();
	return;
}
int main()
{
	int UserSelect;
	while (1)
	{
		cout << "======================  ��ӭ������ʦ����ԤԼϵͳ  ====================="
			<< endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.ѧ    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.�� �� Ա           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.��    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "��������ѡ��: ";
		cin >> UserSelect;
		switch (UserSelect)
		{
		case 1:
			break;
		case 2:
			break;
		case 0:
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}