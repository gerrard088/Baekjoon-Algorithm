#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<string> S(n);
	
	for (int q=0; q < n; q++) {
		cin >> S[q];
	}
	for (int w = 0; w < n; w++) {
		cout << S[w].front() << S[w].back()<<endl;
	}

	return 0;



	return 0;
}