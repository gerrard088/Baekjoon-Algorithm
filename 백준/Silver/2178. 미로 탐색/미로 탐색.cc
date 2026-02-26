#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int N, M;
int map[101][101];
bool visited[101][101];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int dist[101][101];

void bfs(int x, int y) {
	queue<pair<int, int>> qu;
	qu.push({ x, y });
	dist[x][y] = 1;

	while (!qu.empty()) {
		int x = qu.front().first;
		int y = qu.front().second;
		qu.pop();

		for (int q = 0; q < 4; q++) {
			int nx = x + dx[q];
			int ny = y + dy[q];

			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (map[nx][ny] == 1 && dist[nx][ny]==0) {
					dist[nx][ny] = dist[x][y] + 1;
					qu.push({ nx, ny });

				}
			}
		}
	}
}

int main() {

	cin >> N >> M;
	
	for (int q = 0; q < N; q++) {
		string line;
		cin >> line;
		for (int w = 0; w < M; w++) {
			map[q][w] = line[w] - '0';
		}
	}

	bfs(0, 0);

	cout << dist[N - 1][M - 1] << endl;
	
	return 0;
}