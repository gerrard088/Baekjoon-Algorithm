#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;

	int dp[1001][3];
	int cost[3];

	cin >> dp[0][0] >> dp[0][1] >> dp[0][2];

	for (int q = 1; q < N; q++) {
		cin >> cost[0] >> cost[1] >> cost[2];
		dp[q][0] = min(dp[q - 1][1], dp[q - 1][2]) + cost[0];
		dp[q][1] = min(dp[q - 1][0], dp[q - 1][2]) + cost[1];
		dp[q][2] = min(dp[q - 1][0], dp[q - 1][1]) + cost[2];
	}

	cout << min({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]});

	return 0;
}