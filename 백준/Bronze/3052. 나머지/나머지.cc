#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int>arr(10);
	for (int q =0 ; q < 10; q++) {
		cin >> arr[q];
	}
	for (int w=0; w < 10; w++) {
		arr[w]=arr[w]%42;
	}
	sort(arr.begin(), arr.end());
	int total = 1;
	int k = 0;
	for (int e=0; e < 10; e++) {
		
		if (arr[k] != arr[e]) {
			k = e;
			total += 1;
		}
	}
	cout << total;

	return 0;	
}