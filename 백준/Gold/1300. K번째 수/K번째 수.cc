#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long low = 1;
    long long high = K;
    long long ans = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long count = 0;

        for (long long i = 1; i <= N; i++) {
            count += min(N, mid / i);
        }

        if (count >= K) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}