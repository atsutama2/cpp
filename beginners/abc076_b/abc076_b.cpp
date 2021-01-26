#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int x = 1;
    int i = 0;
    while (i < N) {
        x = min(x * 2, x + K);
        i++;
    }
    cout << x << endl;
}