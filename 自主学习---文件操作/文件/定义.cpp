#include<iostream>
#include<fstream>
using namespace std;
//int main() {
//	//2.创建流对象
//	ofstream ofs;
//	//3.打开文件
//	//ofs.open("文件路径", 打开方式);
//	//5.写数据
//	//ofs<<"写入的数据"
//	//6.关闭文件
//	ofs.close();
//}
void test01()
{
	ofstream ofs;
	ofs.open("text.txt",ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄:18" << endl;
	ofs.close();
}
int main() {
	test01();
	system("pause");
	return 0;
}