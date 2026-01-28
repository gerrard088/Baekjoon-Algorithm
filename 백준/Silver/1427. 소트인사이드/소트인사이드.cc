#include <iostream>
#include <vector>
using namespace std;



int main() {
    
    string arr;
    cin >> arr;

    
    vector<int>arr2(10);
    for (int q = 0; q < arr.size(); q++) {
        int newnum;
        newnum = arr[q] - '0';
        
        arr2[newnum]++;
    }

    for (int w = 9; w >= 0; w--) {
        if (arr2[w] != 0) {
            for (int e = 0; e < arr2[w]; e++) {
                cout << w;
            }
        }
    }

    return 0;
}