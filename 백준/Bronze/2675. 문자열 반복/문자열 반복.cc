#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) { // T번 반복
        int R;
        string S;
        cin >> R >> S;

        // 1. 문자열 S의 각 문자를 하나씩 선택 (바깥쪽 루프)
        for (int i = 0; i < S.length(); i++) {

            // 2. 해당 문자를 R번 반복해서 출력 (안쪽 루프)
            for (int j = 0; j < R; j++) {
                cout << S[i];
            }
        }

        // 3. 한 테스트 케이스가 끝나면 줄바꿈
        cout << endl;
    }

    return 0;
}