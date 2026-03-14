#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	int dp[500][500];

	for (int q = 0; q < n; q++) {
		for (int w = 0; w <= q; w++) {
			cin >> dp[q][w];
		}
	}

	for (int q = 1; q < n; q++) {
		for (int w = 0; w <= q; w++) {
			if (w == 0) {
				dp[q][w] += dp[q - 1][w];
			}
			else if (q == w) {
				dp[q][w] += dp[q - 1][w - 1];
			}
			else {
				dp[q][w] += max(dp[q - 1][w - 1], dp[q - 1][w]);
			}
		}
	}

	int maxsum = 0;
	for (int q = 0; q < n; q++) {
		maxsum = max(maxsum, dp[n - 1][q]);
	}

	cout << maxsum;

	return 0;
}