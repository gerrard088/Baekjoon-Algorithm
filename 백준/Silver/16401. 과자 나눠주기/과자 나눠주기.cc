#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	vector<int>arr(N);
	for (int q = 0; q < N; q++) {
		cin >> arr[q] ;
	}

	sort(arr.begin(), arr.end());
	int Min = 1;
	int Max = arr[N-1];
	int im = 0;
	while (Min <= Max) {
		int mid = (Max + Min) / 2;
		int total = 0;
		for (int q = 0; q < N; q++) {
			total += arr[q] / mid;
		}
		if (total >= M) {
			im = mid;
			Min = mid + 1;
		}
		else
			Max = mid - 1;
	}

	cout <<  im;
	return 0;
}