#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

long long dp[101][10];


int main(){
	
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> dp(n, 1);

	for (int q = 0; q < n; q++) {
		cin >> a[q];
	}

	int maxlength = 0;

	for (int q = 0; q < n; q++) {
		for (int w = 0; w < q; w++) {
			if (a[q] > a[w]) {
				dp[q] = max(dp[q], dp[w] + 1);
			}
		}
		maxlength = max(maxlength, dp[q]);
	}
 

	cout << maxlength;
	return 0;
}