#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, alice, Bob;
    cin >> N;

    vector<int> vec(N);
    for(int i=0; i < N; i++) {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int sum = 0;
    for(int i=1; i < N+1; i++) {
        if (i % 2 == 0) {
            sum -= vec.at(i - 1);
        } else {
            sum += vec.at(i - 1);
        }
    }

    cout << sum << endl;
}