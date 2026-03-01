#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int dx[] = { 1, 1,-1, -1, 2, 2, -2, -2 };
int dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
int visited[301][301];
int nx;
int ny; 

struct knight {
	int x;
	int y;
	int d;
};

int solve() {
	int I;
	cin >> I;

	int startx, starty, goalx, goaly;
	cin >> startx >> starty >> goalx >> goaly;


	if (startx == goalx && starty == goaly) {
		return 0;
	}
	queue<knight>q;
	
	memset(visited, -1, sizeof(visited));
	q.push({ startx, starty, 0});
	visited[startx][starty] = 1;

	while (!q.empty()) {

		knight curr = q.front();
		q.pop();

		for (int w = 0; w < 8; w++) {
			nx = curr.x + dx[w];
			ny = curr.y + dy[w];
		

			if (nx < I && nx >= 0 && ny < I && ny >= 0 && visited[nx][ny] == -1) {
				if (nx == goalx && ny == goaly) { return curr.d + 1; }
				visited[nx][ny] = curr.d + 1;
				q.push({ nx, ny, curr.d + 1 });
			}
		}
	}
	return 0;
}


int main(){

	int n;
	cin >> n;

	while (n--) {
		cout << solve() << '\n';
	}
	return 0;
}