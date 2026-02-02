#include <iostream>

using namespace std;

// 숫자에 666이 포함되어 있는지 확인하는 함수
bool isEndNumber(int n) {
    while (n >= 666) {
        // 마지막 세 자리가 666이면 true
        if (n % 1000 == 666) {
            return true;
        }
        // 숫자 한 칸 밀기 (10으로 나누기)
        n /= 10;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    int num = 666;
    int count = 0;

    while (true) {
        if (isEndNumber(num)) {
            count++;
        }

        if (count == N) {
            cout << num << endl;
            break;
        }
        num++;
    }

    return 0;
}