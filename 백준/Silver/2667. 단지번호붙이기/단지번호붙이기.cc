#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

int N;
int map[25][25];
bool visited[25][25];
int cnt;
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

void dfs(int x, int y) {
	visited[x][y] = true;
	cnt++;

	for (int q = 0; q < 4; q++) {
		int nx = x + dx[q];
		int ny = y + dy[q];

		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
			if (map[nx][ny] == 1 && !visited[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}
}

int main() {
	cin >> N;

	for (int q = 0; q < N; q++) {
		string line;
		cin >> line;
		for (int w = 0; w < N; w++) {
			map[q][w] = line[w] - '0';
		}
	}

	vector<int> result;

	for (int q = 0; q < N; q++) {
		for (int w = 0; w < N; w++) {
			if (map[q][w] == 1 && !visited[q][w]) {
				cnt = 0;
				dfs(q, w);
				result.push_back(cnt);
			}
		}
	}
	
	sort(result.begin(), result.end());

	cout << result.size() << '\n';
	for (int q = 0; q < result.size(); q++) {
		cout << result[q] << '\n';
	}


	return 0;
}