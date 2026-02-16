#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 10만 개의 데이터를 빠르게 입력받기 위한 필수 코드
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    // 💡 이분 탐색의 전제 조건: 반드시 정렬되어 있어야 함!
    sort(A.begin(), A.end());

    int M;
    cin >> M;
    while (M--) {
        int target;
        cin >> target;

        int left = 0;
        int right = N - 1;
        bool found = false;

        // 이분 탐색 시작
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (A[mid] == target) {
                found = true;
                break;
            } else if (A[mid] < target) {
                left = mid + 1; // 오른쪽 구간 탐색
            } else {
                right = mid - 1; // 왼쪽 구간 탐색
            }
        }

        if (found) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}