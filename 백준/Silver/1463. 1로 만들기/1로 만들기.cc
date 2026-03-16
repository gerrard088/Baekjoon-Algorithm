#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int main(){
	
	int n;
	cin >> n;

	vector<int> dp(n + 1);

	dp[1] = 0;

	for (int q = 2; q <= n; q++) {
		dp[q] = dp[q - 1] + 1;

		if (q % 2 == 0) {
			dp[q] = min(dp[q], dp[q / 2] + 1);
		}
		if (q % 3 == 0) {
			dp[q] = min(dp[q], dp[q / 3] + 1);
		}
	}
	
	cout << dp[n];

	return 0;
}