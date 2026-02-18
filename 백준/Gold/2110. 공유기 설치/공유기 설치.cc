#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	long long N, C;
	cin >> N >> C;

	vector<long long>gongu(N);

	for (long long q = 0; q < N; q++) {
		cin >> gongu[q];
	}

	sort(gongu.begin(), gongu.end());

	long long Min = 1;
	long long Max = gongu[N - 1] - gongu[0];
	long long im = 0;
	
	while (Min <= Max) {
		long long count = 1;
		long long last = gongu[0];

		long long mid = (Min + Max) / 2;

		for (long long q = 1; q < N; q++) {
			if (gongu[q] - last >= mid) {
				count++;
				last = gongu[q];
			}
		}
		if (count >= C) {
				im = mid;
				Min = mid + 1;
		}
		else
			Max = mid - 1;
	}

	cout << im;

	return 0;
}