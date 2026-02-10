#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;




int main() {
	
	int N;
	cin >> N;

	vector<long long>road(N-1);
	vector<long long>land(N);
	for (int q = 0; q < N-1; q++) {
		cin >> road[q];
	}
	for (int q = 0; q < N; q++) {
		cin >> land[q];
	}

	long long total=land[0]*road[0];
	long long current = 0;
	for (int q = 1; q < N-1; q++) {
		if (land[current] <= land[q]) {
			total += land[current] * road[q];
		}
		else {
			current = q;
			total += land[current] * road[q];
		}
	}

	cout << total;
	return 0;
}