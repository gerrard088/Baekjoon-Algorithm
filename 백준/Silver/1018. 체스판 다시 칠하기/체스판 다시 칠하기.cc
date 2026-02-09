#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


string white_first[8] = {
	"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW",
	"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"
};

string black_first[8] = {
	"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB",
	"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"
};

int main() {

	int N, M;
	cin >> N >> M;
	
	vector<string> board(N);
	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}
	
	int min_repaint = 64;

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int countW = 0;
			int countB = 0;
			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					if (board[i + x][j + y] != white_first[x][y])countW++;
					if (board[i + x][j + y] != black_first[x][y])countB++;
				}
			}
			int current = min(countW, countB);
			min_repaint = min(current, min_repaint);
		}
	}

	cout << min_repaint;
	return 0;
}