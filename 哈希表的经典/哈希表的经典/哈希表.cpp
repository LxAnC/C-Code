//�ҳ��������ظ�������
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<int,bool> map;
	for (int num : nums) {
		if (map[num])
			return num;
		map[num] = true;
	}
	return -1;
}