#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int x[150];
    int ans = 0;

    for(int i=0; i < N; ++i) {
        cin >> x[i];
    }
    for(int i=0; i < N; ++i) {
        ans += 2 * min(x[i], K - x[i]);
    }
    cout << ans << endl;
}