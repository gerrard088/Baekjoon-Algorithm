#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	
	vector<vector<char>>arr(5, vector<char>(15, '\0'));

	for (int q = 0; q < 5; q++) {
		string line;
		cin >> line;
		for (int w = 0; w < line.size(); w++) {
			arr[q][w] = line[w];
		}
	}

	for (int e = 0; e < 15; e++) {
		for (int r = 0; r < 5; r++) {
			if (arr[r][e] != '\0') {
				cout << arr[r][e];
			}
		}
	}
	return 0;
}