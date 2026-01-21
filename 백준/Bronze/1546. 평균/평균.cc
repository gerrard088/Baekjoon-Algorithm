#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int subnum;
	cin >> subnum;

	vector<int>test(subnum);
	for (int q = 0; q < subnum; q++) {
		cin >> test[q];
	}

	double max = *max_element(test.begin(), test.end());
	double total=0;
	for (int w = 0; w < subnum; w++) {
		total = total + (test[w] / max) * 100;
	}

	cout << total/subnum;

	return 0;
}