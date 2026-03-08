#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int main(){
	
	int t;
	cin >> t;

	vector<int> arr(t+1);
	for (int q = 0; q < t; q++) {
		cin >> arr[q];
	}

	vector<int> dp(t+1);
	int maxdp = dp[0] = arr[0];
	for (int q = 1; q < t; q++) {
		dp[q] = max(arr[q], arr[q] + dp[q - 1]);
		if (maxdp < dp[q]) { maxdp = dp[q]; };
	}

	cout << maxdp;
	
}