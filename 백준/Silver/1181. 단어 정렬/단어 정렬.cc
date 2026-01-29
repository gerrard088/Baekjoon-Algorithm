#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string & a, const string &b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    return a<b;
}


int main() {
    
    int numarr;
    cin >> numarr;

    vector<string> arr(numarr);

    for (int q = 0; q < numarr; q++) {
        cin >> arr[q];
    }

    sort(arr.begin(), arr.end(), compare);
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (const string& s: arr) {
        cout << s << '\n';
    }



    return 0;
}