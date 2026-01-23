#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	string name;
	cin >> name;

	int size = name.size();

	vector<int>arr(26, -1);

	for (int q = 0; q < size; q++) {
		
		int loc = name[q]-'a';

		if (arr[loc] == -1) {
			arr[loc] = q;
		}	
	}
	for (int w = 0; w < 26; w++) {
		cout << arr[w] << " ";
	}
}