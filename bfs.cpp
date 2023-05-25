#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100]; // for storing edges
vector<int> visited(100, 0); // visited edges list
vector<int> dist(100, 0); // dist

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = 1;
	dist[start] = 0;

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (int i = 0; i < adj[node].size(); i++) {
			if (visited[adj[node][i]] == 0) {
				visited[adj[node][i]] = 1;
				dist[adj[node][i]] = dist[node] + 1;
				q.push(adj[node][i]);
			}
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int edges;
	cin >> edges;

	for (int i = 0; i < edges; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y); // taking input of edges
		adj[y].push_back(x);
	}

	bfs(1);

	int q; // number of queries
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		cout << dist[x] << endl;
	}


	return 0;
}