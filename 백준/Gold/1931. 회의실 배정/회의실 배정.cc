#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;




int main() {
	int n;
	cin >> n;

	vector<pair<int, int>>arr(n);

	for (int q = 0; q < n; q++) {
		cin >> arr[q].second >> arr[q].first;
	}

	sort(arr.begin(), arr.end());

	int last = 0;
	int count = 0;
	for (int q = 0; q < n; q++) {
		int start = arr[q].second;
		int end = arr[q].first;
		if (start >= last) {
			count++;
			last = end;
		}
	}
	cout << count;

}