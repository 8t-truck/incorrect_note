#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
void bfs(vector<vector<int>> v, int start)//양방향을 적용하지 못함
{
	queue<int> q;
	q.push(start);	//큐에는 내가 참조할 숫자를 집어 넣는다
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		for (int i = 0; i < v[node].size(); i++)
		{
			q.push(v[node][i]);
			//오는 방향을 지워야겠네
			int toNode = v[node][i];
			v[toNode].erase(remove(v[toNode].begin(), v[toNode].end(), node), v[toNode].end());
			//양방향 화살표 지우기
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