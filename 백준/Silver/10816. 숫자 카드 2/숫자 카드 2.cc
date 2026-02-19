#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 입출력 속도 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    // 1. 이분 탐색을 위해 오름차순 정렬 (O(N log N))
    sort(cards.begin(), cards.end());

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int target;
        cin >> target;

        // 2. upper_bound - lower_bound로 개수 계산 (O(M log N))
        // target보다 큰 첫 번째 위치에서 target 이상의 첫 번째 위치를 뺍니다.
        auto low = lower_bound(cards.begin(), cards.end(), target);
        auto up = upper_bound(cards.begin(), cards.end(), target);
        
        cout << up - low << " ";
    }

    return 0;
}