#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	
	vector<vector<int>>paper(100, vector<int>(100));

	int num;
	cin >> num;

	int x, y;
	for (int q = 0; q < num; q++) {
		cin >> x >> y;
		for (int w = x; w < x+10; w++) {
			for (int e = y; e < y+10; e++) {
				paper[w][e] = 1;
			}
		}
	}
	int total = 0;
	for (int r = 0; r < 100; r++) {
		for (int t = 0; t < 100; t++) {
			if (paper[r][t] != 0) { total += 1; }
		}
	}

	cout << total;
	
	return 0;
}