#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	string line;
	cin >> line;

	int time = 0;
	for (int q = 0; q < line.size(); q++) {
	
		if ('A' <= line[q]&& line[q]<= 'C') {
			time += 3;
		}
		if ('D' <= line[q] && line[q] <= 'F') {
			time += 4;
		}
		if ('G' <= line[q] && line[q] <= 'I') {
			time += 5;
		}
		if ('J' <= line[q] && line[q] <= 'L') {
			time += 6;
		}
		if ('M' <= line[q] && line[q] <= 'O') {
			time += 7;
		}
		if ('P' <= line[q] && line[q] <= 'S') {
			time += 8;
		}
		if ('T' <= line[q] && line[q] <= 'V') {
			time += 9;
		}
		if ('W' <= line[q] && line[q] <= 'Z') {
			time += 10;
		}
	}

	cout << time;
	return 0;
}