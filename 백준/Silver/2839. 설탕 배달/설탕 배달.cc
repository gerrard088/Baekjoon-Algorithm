#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	
	bool did=false;
	int least = 99999;
	for (int q = 0; q <= n / 5; q++) {
		for (int w = 0; w <= n / 3; w++) {
			if (q * 5 + w * 3 == n) {
				least = min(least, q + w);
				did = true;
			}
		}
	}

	if (did) {
		cout << least;
	}
	else cout << -1;





	return 0;
}