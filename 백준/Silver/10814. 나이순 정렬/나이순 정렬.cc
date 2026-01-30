#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 데이터를 묶기 위해 구조체(struct)를 사용하면 훨씬 깔끔합니다.
struct Member {
    int age;
    string name;
};

// 나이만 비교하는 함수를 만듭니다.
bool compare(const Member& a, const Member& b) {
    return a.age < b.age; // 나이가 적은 순서대로
}

int main() {
    // 10만 개 데이터이므로 가속 필수!
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Member> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].age >> v[i].name;
    }

    // 💡 핵심: sort 대신 stable_sort를 사용합니다.
    // 나이가 같을 때 원래 입력 순서(인덱스)를 보존해줍니다.
    stable_sort(v.begin(), v.end(), compare);

    for (const auto& m : v) {
        cout << m.age << " " << m.name << "\n";
    }

    return 0;
}