#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	
	vector<vector<int>>paper(101, vector<int>(101));

	int num;
	cin >> num;

	int x, y;
	for (int q = 0; q < num; q++) {
		cin >> x >> y;
		for (int w = x+1; w < x+11; w++) {
			for (int e = y+1; e < y+11; e++) {
				paper[w][e] = 1;
			}
		}
	}
	int total = 0;
	for (int r = 0; r < 101; r++) {
		for (int t = 0; t < 101; t++) {
			if (paper[r][t] != 0) { total += 1; }
		}
	}

	cout << total;
	
	return 0;
}