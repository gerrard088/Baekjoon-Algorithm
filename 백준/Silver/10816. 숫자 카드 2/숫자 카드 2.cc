#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int N, M;
	cin >> N;

	vector<int>arrN(N);
	for (int q = 0; q < N; q++) {
		cin >> arrN[q];
	}

	cin >> M;

	vector<int>arrM(M);
	for (int q = 0; q < M; q++) {
		cin >> arrM[q];
	}

	sort(arrN.begin(), arrN.end());

	for (int q = 0; q < M; q++) {
		
		auto low = lower_bound(arrN.begin(), arrN.end(), arrM[q]);
		auto up = upper_bound(arrN.begin(), arrN.end(), arrM[q]);

		cout << up - low << ' ';
	}

	
	return 0;
}