#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N, M;
	cin >> N;

	vector<int>list(N);
	for (int q = 0; q < N; q++) {
		cin >> list[q];
	}

	cin >> M;
	vector<int>goal(M);
	for (int q = 0; q < M; q++) {
		cin >> goal[q];
	}

	sort(list.begin(), list.end());
	list.erase(unique(list.begin(), list.end()), list.end());

	for (int q = 0; q < M; q++) {
		if (binary_search(list.begin(), list.end(), goal[q])) {
			cout << 1 << '\n';
		}
		else
			cout << 0 << '\n';
	}


	return 0;
}
