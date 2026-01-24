#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int num;
	cin >> num;

	string answer;
	cin >> answer;
	
	int total = 0;
	for (int q = 0; q < num; q++) {
		total += ((int)answer[q] - 48);
	}
	cout << total;
	
}