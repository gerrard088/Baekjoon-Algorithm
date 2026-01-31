#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n;
	int max;
	cin >> n >> max;


	vector<int> arr(n);
	for (int q = 0; q < n; q++) {
		cin >> arr[q];
	}

	int nmax = 0;
	int im;
	for (int q = 0; q < n - 2; q++) {
		for (int w = q + 1; w < n - 1; w++) {
			for (int e = w + 1; e < n; e++) {
				im = arr[q] + arr[w] + arr[e];
				if ((im <= max) && (im > nmax)) {
					nmax = im;
				}
			}
		}
	}

	cout << nmax;

	return 0;

}