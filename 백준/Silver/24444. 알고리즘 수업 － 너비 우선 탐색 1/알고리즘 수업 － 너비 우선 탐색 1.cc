#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int>adj[100001];
int result[100001];
int cnt = 1;


void bfs(int start) {
    queue<int> q;
    q.push(start);
    result[start] = cnt;
    cnt++;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v:adj[u]) {
            if (result[v] == 0) {
                result[v] = cnt;
                cnt++;
                q.push(v);
            }
        }
    }
}

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, r;
    if (!(cin >> n >> m >> r)) return 0;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int q = 1; q <= n; q++) {
        sort(adj[q].begin(), adj[q].end());
    }

    bfs(r);

    for (int q = 1; q <= n; q++) {
        cout << result[q] << '\n';
    }


    return 0;
}