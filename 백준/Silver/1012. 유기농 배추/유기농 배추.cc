#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int T, M, N, K;
int map[50][50];
bool visited[50][50];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

void dfs(int x, int y) {
	visited[x][y] = true;
	
	for (int q = 0; q < 4; q++) {
		int nx = x + dx[q];
		int ny = y + dy[q];

		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
			if (map[nx][ny] == 1 && !visited[nx][ny]) {
				dfs(nx, ny);
				
			}
		}
	}
}

int main() {
	cin >> T;
	vector<int> result;
	
	while (T--) {
		cin >> M >> N >> K;


		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));
		for (int q = 0; q < K; q++) {
			int x, y;
			cin >> x >> y;
			map[x][y] = 1;
		}
		int cnt = 0;

		for (int q = 0; q < M; q++) {
			for (int w = 0; w < N; w++) {
				if (map[q][w] == 1 && !visited[q][w]) {
					cnt++;
					dfs(q, w);
				}
			}
		}
		result.push_back(cnt);

	}

	for (int q = 0; q < result.size(); q++) {
		cout << result[q] << '\n';
	}
	return 0;
}