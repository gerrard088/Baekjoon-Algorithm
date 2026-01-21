#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int>basket(n);

	for (int q = 0; q < n; q++) {
		basket[q] = q + 1;
	}

	for (int w = 0; w < m; w++) {
		int i, j;
		cin >> i >> j;

		reverse(basket.begin() + (i - 1), basket.begin() + j);
	}

	for (int e = 0; e < n; e++) {
		cout << basket[e] << " ";
	}
}