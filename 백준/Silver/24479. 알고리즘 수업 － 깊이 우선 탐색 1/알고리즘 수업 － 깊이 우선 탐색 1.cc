#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> arr[100001];
int visited[100001];
int result[100001];
int cnt = 0;

void dfs(int r) {
	cnt++;
	result[r] = cnt;
	visited[r] = 1;

	for (int next : arr[r]) {
		if (visited[next] == 0) {
			dfs(next);
		}
	}

}

int main() {
	int n, m, r;
	cin >> n >> m >> r;


	for (int q = 0; q < m; q++) {
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	for (int q = 1; q <= n; q++) {
		sort(arr[q].begin(), arr[q].end());
	}

	dfs(r);

	for (int q = 1; q <= n; q++) {
		cout << result[q] << '\n';
	}

	return 0;

}