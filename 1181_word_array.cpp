#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) 
{
	//vector�� �Է� �ް� size()�� ���� ������ �ٸ����Ϳ�
	//�ټ���� �� ���� size�� ���ٸ� sort�Լ��� �����ϱ�
	//�׸��� ���� ũ���� ������ �Է�.�ߺ��� �������� ���ֱ�
	vector<string> t;
	vector<string> arr;
	string temp;
	int test, min=50,index=-1;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> temp;
		t.push_back(temp);
	}
	//sort(t.begin(), t.end());
	//t.erase(unique(t.begin(), t.end()), t.end());

	while(t.size()!=0)
	{
		for (int i = 0; i < test; i++)
		{//�ּҰ� ã�� index�� ��ġ ����
			if (min > t[i].length())
			{
				min = t[i].length();
				index = i;
			}
		}
		arr.push_back(t[index]);
		t.erase(t.begin() + index);
		//t.erase(remove(t.begin(), t.end(), t[index]));//���� �߻�(���� ��)
		//**remove �Լ��� ���� 
		min = 50;
		test = t.size();//������� ���� ª�� �� ����
		for (int i = 0; i < test; i++)
		{
			cout << t[i] << endl;
		}
		cout << "--------------------" << endl;
	}
	cout << "--------------------" << endl;

	for (int i = 0; i <arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}