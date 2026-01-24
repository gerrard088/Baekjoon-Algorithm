#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	
	string line;
	int a = 100;
	while (a--) {
		getline(cin, line);
		cout << line << endl;
	}
	return 0;
}