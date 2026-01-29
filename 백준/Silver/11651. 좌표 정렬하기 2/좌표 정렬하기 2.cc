#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }

    return a.second < b.second;
}


int main() {
    
    int numarr;
    cin >> numarr;

    vector<pair<int, int>> arr(numarr);

    for (int q = 0; q < numarr; q++) {
        cin >> arr[q].first >> arr[q].second;
    }

    sort(arr.begin(), arr.end(), compare);

    for (int w = 0; w < numarr; w++) {
        cout << arr[w].first << " " << arr[w].second << '\n';
    }



    return 0;
}