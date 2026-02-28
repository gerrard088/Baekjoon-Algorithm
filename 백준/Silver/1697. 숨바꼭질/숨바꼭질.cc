#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int result[100001];
int dist[100001];

void bfs(int N, int M) {
	queue <int> q;
	q.push(N);
	result[N] = 1;
	dist[N] = 0;

	while (!q.empty()) {
		int Nx = q.front();
		result[Nx] = 1;
		q.pop();

		// if (Nx==M) { return; }

		if (Nx - 1 >= 0 && Nx - 1 <= 100000 && result[Nx - 1] == 0) {
			result[Nx-1] = 1;
			dist[Nx - 1] = dist[Nx] + 1;
			q.push(Nx - 1);

		}
		if (Nx + 1 >= 0 && Nx + 1 <= 100000 && result[Nx+1] == 0) {
			result[Nx+1] = 1;
			dist[Nx + 1] = dist[Nx] + 1;
			q.push(Nx + 1);

		}
		if (2*Nx >= 0 && 2*Nx <= 100000 && result[2*Nx] == 0) {
			result[2*Nx] = 1;
			dist[2 * Nx] = dist[Nx] + 1;
			q.push(2 * Nx);
		}
		if (Nx - 1 == M || Nx + 1 == M || 2 * Nx == M) { return; }
	}
}

int main(){

	int N, K;
	cin >> N >> K;

	bfs(N, K);

	cout << dist[K];

	return 0;
}