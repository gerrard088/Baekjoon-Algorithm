#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> arr(n + 1);
	vector<int> dp(n + 1,1);
	vector<int> dp1(n + 1,1);
	for (int q =1; q <= n; q++) {
		cin >> arr[q];
	}

	
	for (int q = 1; q <= n; q++) {
		for (int w = 1; w <= q; w++) {
			if (arr[q] > arr[w]) {
				dp[q]=max(dp[q], dp[w] + 1);
			}	
		}
	}

	for (int q = n; q > 0; q--) {
		for (int w = n; w > q; w--) {
			if (arr[q] > arr[w]) {
				dp1[q] = max(dp1[q], dp1[w] + 1);
			}
		}
	}

	int ans = 0;
	for (int q = 1; q <= n; q++) {
		ans = max(ans, dp[q] + dp1[q] - 1);
	}

	cout << ans;
	return 0;


}