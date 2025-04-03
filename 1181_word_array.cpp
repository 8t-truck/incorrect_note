#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) 
{
	//vector로 입력 받고 size()로 작은 순으로 다른벡터에
	//줄세우기 후 같은 size가 없다면 sort함수로 정렬하기
	//그리고 다음 크기의 값들을 입력.중복은 마지막에 없애기
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
	sort(t.begin(), t.end());
	t.erase(unique(t.begin(), t.end()), t.end());


	while(t.size()!=0)
	{
		for (int i = 0; i < t.size(); i++)
		{//최소값 찾고 index에 위치 저장
			if (min > t[i].length())
			{
				min = t[i].length();
				index = i;
			}
		}
		arr.push_back(t[index]);
		t.erase(t.begin() + index);
		//t.erase(remove(t.begin(), t.end(), t[index]));//오류 발생(이유 모름)
		//**remove 함수는 값을 
		min = 50;
		
	}
	min = 0;
	int len = arr[0].length();
	while(min<arr.size()-1)
	{
		for (int j = min; j < arr.size(); j++)
		{
			if (len < arr[j].length())
			{
				index = j;
				len = arr[j].length();
				break;
			}
		}
		sort(arr.begin() + min, arr.begin() + index);
		min = index;

	}
	for (int i = 0; i <arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}//시간초과
