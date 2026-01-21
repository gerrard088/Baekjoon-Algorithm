#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int>chart(30);
	int name;
	for (int q = 0; q < 28; q++) {
		cin >> name;
		chart[name - 1] = name;
	}
	for (int w = 0; w < 30; w++) {
		if (chart[w] == 0) {
			cout << w+1 << endl;
		}
	}
	return 0;
	

}