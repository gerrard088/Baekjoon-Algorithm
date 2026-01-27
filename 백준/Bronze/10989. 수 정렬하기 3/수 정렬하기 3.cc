#include <iostream>

using namespace std;

// 💡 전역 변수로 선언하여 메모리를 안정적으로 할당합니다.
int cnt[10001] = {0};

int main() {
    // 입출력 가속기 (천만 개의 데이터이므로 필수!)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 1. 숫자를 입력받을 때마다 해당 숫자의 카운트를 증가시킵니다.
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cnt[num]++;
    }

    // 2. 1부터 10,000까지 돌면서 카운트된 횟수만큼 숫자를 출력합니다.
    for (int i = 1; i <= 10000; i++) {
        if (cnt[i] != 0) {
            for (int j = 0; j < cnt[i]; j++) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}