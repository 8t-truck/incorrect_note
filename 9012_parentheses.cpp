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
		//()을 찾아서 반복하여 erase
		//size()가 0이 되면 YES 출력, 0이 될 수 없으면 NO 출력
		string target = "()";
		while (true)
		{
			//arr[i].erase(remove(arr[i].begin(), arr[i].end(), target), arr[i].end());
			//잘못된 코드
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