#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	
	string line;
	getline(cin, line);
	stringstream linestream(line);
	
	string word;
	int total=0;
	while (linestream >> word) {
		total += 1;
	}
	cout << total;

	return 0;
}