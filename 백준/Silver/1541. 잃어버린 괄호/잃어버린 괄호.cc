#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	string input;
	cin >> input;

	int result = 0;
	string num = "";
	bool isMinus = false;

	for (int q = 0; q <= input.size(); q++) {
		if (q == input.size() || input[q] == '+' || input[q] == '-') {

			if (isMinus) {
				result -= stoi(num);
			}
			else {
				result += stoi(num);
			}
			num = "";
			if (input[q] == '-') {
				isMinus = true;
			}

		}
		else {
			num += input[q];
		}
	}

	cout << result;
	return 0;
}