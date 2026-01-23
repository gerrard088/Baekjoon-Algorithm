#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int testnum;
	cin >> testnum;

	for (int q = 0; q < testnum; q++) {
		int repeat;
		string name;
		cin >> repeat>>name;

		for (int w = 0; w < name.length(); w++) {
			for (int q = 0; q < repeat; q++) {
				cout << name[w];
			}
		}
		cout << endl;
	}
}