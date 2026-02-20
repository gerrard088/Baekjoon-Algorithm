#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	

	int N;
	cin >> N;
	vector<int>arr(N);

	for (int q = 0; q < N; q++) {
		cin >> arr[q];
	}
	sort(arr.begin(), arr.end());


	vector<int>arr2;
	for (int q = 0; q < N - 1; q++) {
		for (int w = q; w < N; w++) {
			arr2.push_back(arr[q] + arr[w]);
		}
	}
	
	sort(arr2.begin(), arr2.end());
	arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());

	for (int q = N - 1; q >= 0; q--) {
		for (int w = 0; w < N; w++) {
			int res = arr[q] - arr[w];
			if (binary_search(arr2.begin(), arr2.end(), res)) {
				cout << arr[q];
				return 0;
			}
		}
	}

	return 0;
}