#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	
	vector<vector<int>> arr(9, vector<int>(9.0));

	int max=arr[0][0];
	int maxq=0;
	int maxw = 0;

	for (int q = 0; q < 9; q++) {
		for (int w = 0; w < 9; w++) {
			cin >> arr[q][w];
			if (max < arr[q][w]) {
				max = arr[q][w];
				maxq = q, maxw = w;
			}
		}
	}

	cout << max << endl;
	cout << maxq + 1 << " " << maxw+1 ;


}