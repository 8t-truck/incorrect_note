#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
void bfs(vector<vector<int>> v, int start)//������� �������� ����
{
	queue<int> q;
	q.push(start);	//ť���� ���� ������ ���ڸ� ���� �ִ´�
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		for (int i = 0; i < v[node].size(); i++)
		{
			q.push(v[node][i]);
			//���� ������ �����߰ڳ�
			int toNode = v[node][i];
			v[toNode].erase(remove(v[toNode].begin(), v[toNode].end(), node), v[toNode].end());
			//����� ȭ��ǥ �����
			q.pop();
		}
		cout << node << ' ';
	}
	cout << endl;
}
int main()
{
	int N, M, V;
	cin >> N >> M >> V;
	vector<vector<int>>graph(N + 1);	//graph[0] = { 0 }
	for (int i = 0; i < M; i++)
	{
		int l, r;
		cin >> l >> r;
		graph[l].push_back(r);
		graph[r].push_back(l);
	}
	for (int i = 0; i < M; i++)
		sort(graph[i].begin(), graph[i].end());
	
	bfs(graph, V);
	return 0;
}