#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	
	int K, N;
	cin >> K >> N;

	vector<long long>arr(K);
	for (int q = 0; q < K; q++) {
		cin >> arr[q];
	}

	sort(arr.begin(), arr.end());

	long long Min = 1, Max = arr[K-1];
	int im = 0;

	while (Min<=Max) {
		int total = 0;
		long long longest = (Min + Max) / 2;
		
		for (int q = 0; q < K; q++) {
			total += (arr[q] / longest);
		}
		if (total >= N) {
			im = longest;
			Min = longest + 1;
		}
		else {
			Max =  longest-1;
		}
	}

	cout << im;

	return 0;
}