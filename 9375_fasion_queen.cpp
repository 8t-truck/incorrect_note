#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;
int main(void)
{
	int test;
	cin >> test;

	for(int i =0;i<test;i++)
	{
		int clothes;
		cin >> clothes;
		string arr[30];
		map<string, int> match;
		for(int ii=0; ii<clothes;ii++)
		{
			string type, name;
			cin >> name >> type;
			if (match.find(type) != match.end())
				match[type]++;
			else
			{
				match[type] = 1;
				arr[ii] = type;
			}
		}
		for (int j = 0; j < pow(2, match.size()) - 1; j++)
			//본격적인 계산을 실행하는 곳
		{

		}
	}


	return 0;
}