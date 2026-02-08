#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, money;

	cin >> n >> money;

	vector<int>arr(n);

	for (int q = 0; q < n; q++) {
		cin >> arr[q];
	}

	int count = 0;
	for (int q = n-1; q >= 0; q--) {
		if (money >= arr[q]) {
			count += money / arr[q];
			money = money % arr[q];
			if (money == 0) {
				cout << count;
				return 0;
			}
		}
	}

	return 0;
}