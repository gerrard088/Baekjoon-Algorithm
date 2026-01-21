#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	vector<int>basket(n);

	for (int q = 0; q < m; q++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int w = i; w <= j; w++) {
			basket[w-1] = k;
		}
	}
	
	for (int e = 0; e < n; e++) {
		cout << basket[e] << " ";
	}
	return 0;
}