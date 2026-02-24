#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>

using namespace std;

vector<int> arr[1001];
int result [1001];
int cnt = 0;

void dfs(int start) {
	cnt++;
	result[start] = cnt;
	cout << start << ' ';

	for (int r : arr[start]) {
		if (result[r] == 0) {
			dfs(r);
		}
	}
}

int result2 [1001];
int cnt2 = 0;

void bfs(int start) {
	queue<int> q;
	q.push(start);
	cnt2++;
	result2[start] = cnt2;

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		cout << u << ' ';

		for (int v : arr[u]) {
			if (result2[v] == 0) {
				cnt2++;
				result2[v] = cnt2;
				q.push(v);
			}
		}
	}
}


int main() {
	int N, M, V;
	cin >> N >> M >> V;

	for (int q = 0; q < M; q++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}

	for (int q = 1; q <= N; q++) {
		sort(arr[q].begin(), arr[q].end());
	}

	dfs(V);
	cout << '\n';
	bfs(V);
	


	return 0;
}