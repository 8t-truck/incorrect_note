#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
	int test;
	cin >> test;
	vector<string>arr;
	for (int i = 0; i < test; i++)
	{
		string temp;
		cin >> temp;
		arr.push_back(temp);
	}
	for (int i = 0; i < test; i++)
	{
		//()�� ã�Ƽ� �ݺ��Ͽ� erase
		//size()�� 0�� �Ǹ� YES ���, 0�� �� �� ������ NO ���
		string target = "()";
		while (true)
		{
			//arr[i].erase(remove(arr[i].begin(), arr[i].end(), target), arr[i].end());
			//�߸��� �ڵ�
			int index = arr[i].find(target);
			arr[i].erase(arr[i].begin() + index, arr[i].begin() + index + 2);
			
			if (arr[i].find(target) == -1)
				break;
		}
		if (arr[i].size() == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}