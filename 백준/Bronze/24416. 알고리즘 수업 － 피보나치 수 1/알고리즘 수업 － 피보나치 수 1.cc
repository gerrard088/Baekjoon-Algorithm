#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int cnt = 0;
int cnt2 = 0;

int fib(int n) {
	if (n == 1 || n == 2) {
		cnt++;
		return 1;
	}
	else {
		return(fib(n - 1) + fib(n - 2));
	}
}

int fibona(int n) {
	vector<int> f(n + 1);
	f[1] = f[2] = 1;

	for (int w = 3; w <= n; w++) {
		cnt2++;
		f[w] = f[w - 1] + f[w - 2];
	}
	return f[n];

}


int main(){

	int n;
	cin >> n;

	fib(n);
	fibona(n);

	cout << cnt << ' ' << cnt2;

	return 0;
}