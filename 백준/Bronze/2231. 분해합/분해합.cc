#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;

    // 1. 1부터 N까지 모든 숫자를 검사합니다.
    for (int i = 1; i < n; i++) {
        int sum = i; // 자기 자신으로 시작
        int temp = i;

        // 2. 각 자리수의 합을 구합니다.
        while (temp > 0) {
            sum += temp % 10; // 마지막 자리수 더하기
            temp /= 10;       // 마지막 자리수 떼어내기
        }

        // 3. 분해합이 N과 같다면 가장 작은 생성자를 찾은 것!
        if (sum == n) {
            result = i;
            break; // 찾았으니 즉시 탈출
        }
    }

    // 4. 결과 출력 (못 찾았다면 초기값 0이 출력됨)
    cout << result << endl;

    return 0;
}