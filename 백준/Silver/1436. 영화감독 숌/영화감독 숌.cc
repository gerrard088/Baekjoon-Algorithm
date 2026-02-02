#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 666; // 가장 작은 종말의 수부터 시작
    int count = 0;

    while (true) {
        // 숫자를 문자열로 변환하여 "666"이 포함되어 있는지 확인
        if (to_string(num).find("666") != string::npos) {
            count++;
        }

        // N번째 숫자를 찾았다면 출력 후 종료
        if (count == N) {
            cout << num << endl;
            break;
        }

        num++; // 다음 숫자로 이동
    }

    return 0;
}