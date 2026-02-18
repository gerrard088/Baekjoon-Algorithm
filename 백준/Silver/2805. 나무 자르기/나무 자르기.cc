#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	
	long long N;
	long long M;
	cin >> N >> M;

	vector<long long>trees(N);
	for (long long q = 0; q < N; q++) {
		cin >> trees[q];
	}

	sort(trees.begin(), trees.end());

	long long Min = 0;
	long long Max = trees[N-1];
	long long high = 0;
	long long im = 0;
	while (Min <= Max) {
		long long total = 0;
		high = (Min + Max) / 2;
		for (long long q = 0; q < N; q++) {
			if (trees[q] <= high) {
				total += 0;
			}
			else {
				total += trees[q] - high;
			}
		}
		if (total >= M) {
			im = high;
			Min = high + 1;
		}
		else
			Max = high - 1;
	}

	cout << im;

	
	return 0;
}