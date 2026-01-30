#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
}

int main() {
	int num;
	cin >> num;

	vector<int> arr(num);
	vector<int> arr2(num);

	for (int q = 0; q < num; q++) {
		cin >> arr[q];
		arr2[q] = arr[q];
	}

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int w = 0; w < num;w++) {
		auto loc = lower_bound(arr.begin(), arr.end(), arr2[w]);
		cout << loc - arr.begin()<< " ";
	}

	return 0;

}