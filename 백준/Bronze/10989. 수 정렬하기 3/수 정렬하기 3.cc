#include <iostream>
#include <vector>
using namespace std;


vector<int>arr(10001);

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;


    int input;
    for (int q = 0; q < num; q++) {
        cin >> input;
        arr[input] += 1;
    }


    for (int w = 0; w < 10001; w++) {
        if (arr[w] != 0) {
            for (int e = 0; e < arr[w]; e++) {
                cout << w << "\n";
            }
        }
    }

    return 0;
}