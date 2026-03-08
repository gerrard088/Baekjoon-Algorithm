#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

vector<long long> arr(101);

long long dp(int n) {
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;

	for (int q = 6; q <= n; q++) {
		arr[q] = arr[q - 1] + arr[q - 5];
	}

	return arr[n];
}

int main(){
	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		cout << dp(n)<<'\n';
	}
}