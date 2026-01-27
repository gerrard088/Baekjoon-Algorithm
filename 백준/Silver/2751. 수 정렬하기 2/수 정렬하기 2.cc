#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int num;
    cin >> num;

    vector<int>arr(num);

    for (int q = 0; q < num; q++) {
        cin >> arr[q];
    }

    sort(arr.begin(), arr.end());

    for (int w = 0; w < num; w++) {
        cout << arr[w] << "\n";
    }

    return 0;

}

