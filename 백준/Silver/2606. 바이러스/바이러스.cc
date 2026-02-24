#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> arr[100001];
int result [100001];
int cnt = 0;

void dfs(int start) {
	cnt++;
	result[start] = cnt;

	for (int r : arr[start]) {
		if (result[r] == 0) {
			dfs(r);
		}
	}
}

int main() {
	int com, net;
	cin >> com >> net;

	for (int q = 0; q < net; q++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}

	for (int q = 0; q < net; q++) {
		sort(arr[q].begin(), arr[q].end());
	}

	dfs(1);

	int cnt2 = 0;
	for (int q = 1; q <= com; q++) {
		if (result[q] != 0) {
			cnt2++;
		}
	}

	cout << cnt2-1;
	return 0;
}